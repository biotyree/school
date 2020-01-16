/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 09:48:57 by btyree            #+#    #+#             */
/*   Updated: 2019/09/15 16:37:09 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		if (content == 0)
		{
			new_node->content = NULL;
			new_node->content_size = 0;
		}
		else
		{
			new_node->content = ft_memalloc(content_size);
			if (new_node->content == NULL)
			{
				ft_memdel((void **)&new_node);
				return (NULL);
			}
			ft_memcpy(new_node->content, content, content_size);
			new_node->content_size = content_size;
		}
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
