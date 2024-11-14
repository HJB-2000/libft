/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:31:22 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/09 18:11:07 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_tmp;
	unsigned char	*dest_tmp;

	src_tmp = (unsigned char *)src;
	dest_tmp = (unsigned char *)dst;
	if (dest_tmp == src_tmp)
		return (src_tmp);
	if (src_tmp < dest_tmp && src_tmp + len > dest_tmp)
	{
		while (len--)
		{
			dest_tmp[len] = src_tmp[len];
		}
	}
	else
		ft_memcpy(dest_tmp, src_tmp, len);
	return (dst);
}
