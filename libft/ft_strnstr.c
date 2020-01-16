/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:57:16 by btyree            #+#    #+#             */
/*   Updated: 2019/09/09 17:19:20 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char		*s1;
	unsigned int	i;
	unsigned int	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	s1 = haystack;
	while (haystack[i])
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && needle[j] && i + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)s1);
		}
		i++;
		s1++;
	}
	return (NULL);
}
