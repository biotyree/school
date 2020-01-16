/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:48:44 by btyree            #+#    #+#             */
/*   Updated: 2019/09/08 14:40:41 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a;

	a = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*a == (unsigned char)c)
			return (a);
		a++;
	}
	return (NULL);
}
