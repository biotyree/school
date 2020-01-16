/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:47:53 by btyree            #+#    #+#             */
/*   Updated: 2019/09/08 16:02:11 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*s1;
	int			i;
	int			j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	s1 = haystack;
	while (haystack[i])
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)s1);
		}
		i++;
		s1++;
	}
	return (NULL);
}
