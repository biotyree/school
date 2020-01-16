/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:32:45 by btyree            #+#    #+#             */
/*   Updated: 2019/09/03 18:34:24 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_output_file(int fd)
{
	char buf[1 + 1];

	while (read(fd, buf, 1))
	{
		buf[1] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open() error");
			return (1);
		}
		ft_output_file(fd);
		if (close(fd) == -1)
		{
			ft_putstr("close() error");
			return (1);
		}
	}
	return (0);
}
