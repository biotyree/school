/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:41:53 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 17:50:01 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_mkstr(char const *s, unsigned int *i1, unsigned int *start)
{
	char			*str;
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
			break ;
	}
	*start = i;
	while (s[i])
		i++;
	i--;
	while (i > 0)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i--;
		else
			break ;
	}
	str = (char *)malloc(sizeof(char) * (i - *start + 2));
	*i1 = i;
	return (str);
}

char			*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	unsigned int	start;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	if (*s != '\0')
	{
		str = ft_mkstr(s, &i, &start);
		if (str)
		{
			j = 0;
			while (start + j <= i)
			{
				str[j] = s[start + j];
				j++;
			}
			str[j] = '\0';
			return (str);
		}
		return (NULL);
	}
	return ((char*)s);
}
