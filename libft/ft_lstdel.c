/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:07:05 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 15:41:18 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (*alst)
	{
		while (*alst)
		{
			tmp = *alst;
			*alst = (*alst)->next;
			ft_lstdelone(&tmp, del);
		}
	}
	else
	{
		free(*alst);
		*alst = NULL;
	}
}
