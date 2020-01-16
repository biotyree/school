/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btyree <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 08:53:35 by btyree            #+#    #+#             */
/*   Updated: 2019/09/03 10:39:06 by btyree           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int q;

	q = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		q = s1[i] - s2[i];
	return (q);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	if (argc >= 1)
	{
		i = 2;
		j = 1;
		while (j++ < argc)
		{
			i = 1;
			while (++i < argc)
				if (ft_strcmp(argv[i], argv[i - 1]) < 0)
				{
					tmp = argv[i];
					argv[i] = argv[i - 1];
					argv[i - 1] = tmp;
				}
		}
		ft_print_params(argc, argv);
	}
	else
		ft_putchar('\n');
	return (0);
}
