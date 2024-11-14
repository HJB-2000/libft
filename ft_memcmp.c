/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:50:00 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/01 17:13:25 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr_tmp1;
	unsigned char	*arr_tmp2;
	size_t			count;

	count = 0;
	arr_tmp1 = (unsigned char *)s1;
	arr_tmp2 = (unsigned char *)s2;
	while (count < n)
	{
		if (arr_tmp1[count] != arr_tmp2[count])
		{
			return (arr_tmp1[count] - arr_tmp2[count]);
		}
		count++;
	}
	return (0);
}
