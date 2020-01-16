/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:32:34 by btyree            #+#    #+#             */
/*   Updated: 2019/09/08 10:58:11 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int			i;
	int			len;
	char		*s1;
	const char	*s2;

	i = size;
	s1 = dst;
	s2 = src;
	while (i-- && *s1)
		s1++;
	len = s1 - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(s2));
	while (*s2)
	{
		if (i != 1)
		{
			*s1++ = *s2;
			i--;
		}
		s2++;
	}
	*s1 = '\0';
	return (len + (s2 - src));
}
