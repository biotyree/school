/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:45:09 by btyree            #+#    #+#             */
/*   Updated: 2019/09/09 10:24:15 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_count(int n, unsigned int *i, unsigned int *j,
		unsigned long *tmp)
{
	char			*a;
	unsigned int	k;

	*i = 1;
	*j = 0;
	*tmp = 10;
	k = n;
	if (n < 0)
	{
		k = n * (-1);
		(*i)++;
		(*j)++;
	}
	while (k % *tmp != k)
	{
		(*tmp) = (*tmp) * 10;
		(*i)++;
	}
	*tmp = *tmp / 10;
	a = (char *)malloc(sizeof(char) * (*i + 1));
	return (a);
}

char			*ft_itoa(int n)
{
	char			*a;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned long	tmp;

	a = ft_count(n, &i, &j, &tmp);
	k = n;
	if (!a)
		return (NULL);
	if (j == 1)
	{
		k = n * (-1);
		a[0] = '-';
	}
	while (j < i)
	{
		a[j++] = '0' + k / tmp;
		k = k - k / tmp * tmp;
		tmp = tmp / 10;
	}
	a[j] = '\0';
	return (a);
}
