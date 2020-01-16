/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:35:02 by btyree            #+#    #+#             */
/*   Updated: 2019/09/02 20:44:27 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;
	int b;

	b = 0;
	a = 1;
	while (b < nb + 1)
	{
		b = a * a;
		a = a + 1;
	}
	a = a - 2;
	b = a * a;
	if (b == nb)
		return (a);
	else
		return (0);
}
