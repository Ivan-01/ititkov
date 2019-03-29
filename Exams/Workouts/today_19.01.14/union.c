/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 15:26:55 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/14 17:31:24 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>			//Надо внимательно читать задание!

void	ft_putchar(char c)
{
	write(1, &c, 1);   // Не надо ставить &c в кавычки!
}

int		ft_check_doubles(char *str, char c, int p)
{
	int		i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_check_doubles(argv[1], argv[1][i], i) == 0)
				ft_putchar(argv[1][i++]);
			else
				i++;
		}
		while (argv[2][j])//Что за хрень?! Почему цикл не останавливается в конце строки?
		{
			if (ft_check_doubles(argv[1],  argv[2][j], j) == 0)
			{
				if (ft_check_doubles(argv[2],  argv[2][j], j) == 0)
						ft_putchar(argv[2][j++]);
			
				else
					j++;
			}
			else   // Потому что нужен else!
				j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
