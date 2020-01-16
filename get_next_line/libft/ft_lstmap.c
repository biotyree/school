/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:32:46 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 17:06:29 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *a;
	t_list *newlst;

	if (lst)
	{
		a = f(lst);
		newlst = a;
		while (lst->next)
		{
			lst = lst->next;
			if (!(a->next = f(lst)))
			{
				free(a->next);
				return (NULL);
			}
			a = a->next;
		}
	}
	else
		return (NULL);
	return (newlst);
}
