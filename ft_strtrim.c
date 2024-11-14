/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:31:12 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/01 17:39:37 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			start_p;
	size_t			end_p;
	unsigned int	s_len;
	unsigned int	set_len;

	if (!s1 || !set)
		return (NULL);
	s_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	start_p = 0;
	end_p = s_len - 1;
	while (start_p < s_len && ft_strrchr(set, s1[start_p]))
		start_p++;
	if (start_p == s_len)
		return (ft_strdup(""));
	while (end_p > start_p && ft_strrchr(set, s1[end_p]))
		end_p--;
	return (ft_substr(s1, start_p, (end_p - start_p) + 1));
}
