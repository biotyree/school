/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:19:42 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 17:06:48 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_func(const char *str, int *sign)
{
	unsigned int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
		i++;
	if (str[i] == '+' && (str[i + 1] >= 48 && str[i + 1] <= 57))
		i++;
	if (str[i] == '-')
	{
		i++;
		*sign = -1;
	}
	return (i);
}

int						ft_atoi(const char *str)
{
	unsigned int	i;
	long long int	num;
	int				sign;
	long long int	check;

	num = 0;
	sign = 1;
	i = ft_func(str, &sign);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		check = num * 10 + (str[i] - 48);
		if (check / 10 != num && sign == 1)
			return (-1);
		if (check / 10 != num && sign == -1)
			return (0);
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
