/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:14:25 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/01 17:36:16 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*created_s;
	size_t	str_len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str_len = ft_strlen(s);
	created_s = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!created_s)
		return (NULL);
	while (s[i] && i < str_len)
	{
		created_s[i] = f(i, s[i]);
		i++;
	}
	created_s[i] = '\0';
	return (created_s);
}
