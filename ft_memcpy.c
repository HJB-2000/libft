/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:01:52 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/01 17:15:27 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;
	size_t			count;

	if (src == dst)
		return (dst);
	if ((dst == NULL && src == NULL) && n > 0)
		return (NULL);
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	count = 0;
	while (count < n)
	{
		dst_tmp[count] = src_tmp[count];
		count++;
	}
	return (dst);
}
