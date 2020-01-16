/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:49:45 by btyree            #+#    #+#             */
/*   Updated: 2019/09/03 10:38:48 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*arr;
	int tmp;
	int i;

	if (min >= max)
		return (NULL);
	else
	{
		arr = (int *)malloc(sizeof(int) * (max - min));
		tmp = min;
		i = 0;
		while (tmp < max)
		{
			arr[i] = tmp;
			tmp++;
			i++;
		}
		return (arr);
	}
}
