/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:26:37 by btyree            #+#    #+#             */
/*   Updated: 2019/09/08 14:32:05 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *s1;

	s1 = s;
	if (*s1 == (unsigned char)c)
		return ((char*)s1);
	while (*s1++)
		if (*s1 == (unsigned char)c)
			return ((char*)s1);
	return (NULL);
}
