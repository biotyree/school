/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 08:25:21 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 17:33:52 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*arr;
	unsigned int	i;

	i = 0;
	if (size)
	{
		arr = (unsigned char *)malloc(size);
		if (arr)
		{
			while (i < size)
			{
				arr[i] = '\0';
				i++;
			}
			return (arr);
		}
	}
	return (NULL);
}
