/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:33:57 by jbahmida          #+#    #+#             */
/*   Updated: 2024/10/24 15:39:43 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*dest;

	count = 0;
	dest = (unsigned char *) b;
	while (count < len)
	{
		dest[count] = (unsigned char) c;
		count ++;
	}
	return (b);
}
