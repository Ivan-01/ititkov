/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 10:08:57 by exam              #+#    #+#             */
/*   Updated: 2019/02/05 10:37:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	int		flag;

	flag = -1;
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (flag == -1 && (*argv[1] == ' ' || *argv[1] == '\t'))
				argv[1]++;
			else if (flag > -1 && (*argv[1] == ' ' || *argv[1] == '\t'))
			{
				flag = 0;
				argv[1]++;
			}
			else if (flag == -1 && (*argv[1] != ' ' || *argv[1] != '\t'))
			{
				ft_putchar(*argv[1]++);
				flag = 1;
			}
			else if (flag == 0 && (*argv[1] != ' ' || *argv[1] != '\t'))
			{
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(*argv[1]++);
				flag = 1;
			}
			else if (flag == 1 && (*argv[1] != ' ' || *argv[1] != '\t'))
			{
				ft_putchar(*argv[1]++);
				flag = 1;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}

