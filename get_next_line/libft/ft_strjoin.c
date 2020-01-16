/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:26:38 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 17:31:46 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fillit(char const *s1, char const *s2, char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i])
			i++;
		j = 0;
		while (s2[j])
			j++;
		str = (char *)malloc(sizeof(char) * (i + j + 1));
		if (str)
		{
			ft_fillit(s1, s2, str);
			return (str);
		}
	}
	return (NULL);
}
