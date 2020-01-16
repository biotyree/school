/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:01:02 by btyree            #+#    #+#             */
/*   Updated: 2019/09/06 15:22:53 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		a[i] = b[i];
		if (a[i] == (unsigned char)c)
			return (a + i + 1);
		i++;
	}
	return (NULL);
}
