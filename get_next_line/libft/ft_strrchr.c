/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:38:33 by btyree            #+#    #+#             */
/*   Updated: 2019/09/06 15:08:38 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*s1;

	i = 0;
	s1 = s;
	while (*s1++)
		i++;
	while (i-- > 0)
	{
		s1--;
		if (*s1 == (unsigned char)c)
			return ((char *)s1);
	}
	s1--;
	if (*s1 == (unsigned char)c)
		return ((char *)s1);
	return (NULL);
}
