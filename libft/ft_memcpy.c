/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:35:46 by btyree            #+#    #+#             */
/*   Updated: 2019/09/08 14:18:52 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*a++ = *b++;
	return (dst);
}
