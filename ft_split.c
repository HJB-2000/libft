/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:58:45 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/07 13:26:07 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *str, char delim)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == delim)
			i++;
		if (str[i] && str[i] != delim)
			count++;
		while (str[i] && str[i] != delim)
			i++;
	}
	return (count);
}

static char	**free_split(char **w_str, size_t j)
{
	while (j > 0)
		free(w_str[--j]);
	free(w_str);
	return (NULL);
}

static char	**handle_word(char **w_str, char *str, size_t pos, size_t len)
{
	w_str[pos] = (char *)malloc(sizeof(char) * (len + 1));
	if (!w_str[pos])
		return (free_split(w_str, pos));
	ft_strlcpy(w_str[pos], str, len + 1);
	return (w_str);
}

static char	**process_split(char **w_str, char *str, size_t w_n, char c)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	j = 0;
	i = 0;
	while (j < w_n)
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			pos = i;
			while (str[i] && str[i] != c)
				i++;
			w_str = handle_word(w_str, &str[pos], j, i - pos);
			if (!w_str)
				return (NULL);
			j++;
		}
	}
	w_str[j] = NULL;
	return (w_str);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**w_str;
	size_t	w_n;

	str = (char *)s;
	if (!str)
		return (NULL);
	w_n = count_word(str, c);
	w_str = (char **)malloc(sizeof(char *) * (w_n + 1));
	if (!w_str)
		return (NULL);
	return (process_split(w_str, str, w_n, c));
}
