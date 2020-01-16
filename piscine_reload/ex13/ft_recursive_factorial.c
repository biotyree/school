/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 19:57:54 by btyree            #+#    #+#             */
/*   Updated: 2019/09/03 10:01:06 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 13 && nb >= 0)
	{
		if (nb == 1 || nb == 0)
			return (1);
		else
			return (nb = ft_recursive_factorial(nb - 1) * nb);
	}
	else
		return (0);
}
