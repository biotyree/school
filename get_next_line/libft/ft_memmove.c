/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:17:11 by btyree            #+#    #+#             */
/*   Updated: 2019/09/08 14:08:47 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *a;
	unsigned char *b;
	unsigned char *c;
	unsigned char *d;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (a < b)
		while (len--)
			*a++ = *b++;
	else
	{
		c = a + (len - 1);
		d = b + (len - 1);
		while (len--)
			*c-- = *d--;
	}
	return (dst);
}
