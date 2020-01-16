/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:20:57 by btyree            #+#    #+#             */
/*   Updated: 2019/09/09 10:36:51 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (s)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str)
		{
			i = 0;
			while (i < len)
			{
				str[i] = s[start + i];
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
