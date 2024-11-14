/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:26:11 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/01 17:26:19 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy_str;
	size_t	str_len;

	str_len = ft_strlen(s1);
	copy_str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!copy_str)
		return (NULL);
	ft_strlcpy(copy_str, s1, str_len + 1);
	return (copy_str);
}
