/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <btyree@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:40:10 by btyree            #+#    #+#             */
/*   Updated: 2019/11/26 21:22:18 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*check_storage(char **a, char **line)
{
	char	*b;

	b = NULL;
	if (*a)
		if ((b = ft_strchr(*a, '\n')))
		{
			*b = '\0';
			b++;
			*line = ft_strdup(*a);
			ft_strcpy(*a, b);
		}
		else
		{
			*line = ft_strdup(*a);
			ft_strclr(*a);
		}
	else
		*line = ft_strnew(0);
	return (b);
}

void	check_balance(char *balance, char **storage, char *garbage)
{
	*balance = '\0';
	balance++;
	garbage = *storage;
	*storage = ft_strdup(balance);
	free(garbage);
}

int		filling(const int fd, char **line, char **storage, char **rline)
{
	int				count;
	char			*garbage;
	char			*balance;
	char			buf[BUFF_SIZE + 1];

	balance = check_storage(storage, line);
	while (!balance && (count = read(fd, buf, BUFF_SIZE)))
	{
		buf[count] = '\0';
		if ((balance = ft_strchr(buf, '\n')))
			check_balance(balance, storage, garbage);
		garbage = *line;
		if (!(*line = ft_strjoin(*line, buf)) || count < 0)
			return (-1);
		free(garbage);
	}
	if (count > 0 || ft_strlen(*line) || balance)
	{
		*rline = *line;
		return (1);
	}
	*rline = *line;
	return (0);
}

int		lff(t_list *tmp, const int fd)
{
	if (tmp->next == NULL)
	{
		if (fd == 0)
		{
			if (!(tmp->next = ft_lstnew("", 1)))
				return (-1);
			(tmp->next)->content_size = 0;
		}
		else if (!(tmp->next = ft_lstnew("", fd)))
			return (-1);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*head;
	t_list			*tmp;
	char			*tline;
	char			buf[BUFF_SIZE + 1];

	tline = NULL;
	if (fd < 0 || line == NULL || BUFF_SIZE < 0 || (read(fd, buf, 0) < 0))
		return (-1);
	if (fd == 0 && head == NULL)
	{
		if (!(head = ft_lstnew("", 1)))
			return (-1);
		head->content_size = 0;
	}
	if (head == NULL)
		if (!(head = ft_lstnew("", fd)))
			return (-1);
	tmp = head;
	while ((int)(tmp->content_size) != fd)
	{
		if ((lff(tmp, fd)) == -1)
			return (-1);
		tmp = tmp->next;
	}
	return (filling(tmp->content_size, &tline, (char**)&tmp->content, line));
}
