/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:06:27 by btyree            #+#    #+#             */
/*   Updated: 2019/09/16 13:28:18 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count(char const *s, char c)
{
	unsigned int i;
	unsigned int flag;

	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			flag++;
		i++;
	}
	if (s[0] != c)
		flag++;
	return (flag);
}

static void			ft_func(char const *s, char c, char **str,
		unsigned int flag)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				str[flag][j] = s[i];
				i++;
				j++;
			}
			str[flag][j] = '\0';
			flag++;
			continue ;
		}
		i++;
	}
}

static unsigned int	mal(char const *s, char c, char **str, unsigned int f)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			str[f] = (char *)malloc(sizeof(char) * (j + 1));
			if (!str[f])
				return (f);
			i = i + j;
			f++;
			continue ;
		}
		i++;
	}
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 0;
	if (s == 0)
		return (NULL);
	flag = ft_count(s, c);
	str = (char **)malloc(sizeof(char *) * (flag + 1));
	if (str == 0)
		return (NULL);
	if ((i = mal(s, c, str, flag)) != 0)
	{
		while (i)
		{
			free(str[i]);
			i--;
		}
		free(str);
		return (NULL);
	}
	ft_func(s, c, str, flag);
	str[flag] = 0;
	return (str);
}
