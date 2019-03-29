/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:33:04 by exam              #+#    #+#             */
/*   Updated: 2018/12/04 11:20:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_double(char *str, char l, int i)
{
	int		j;

	j = 0;
	while (j < i)
	{
		if (str[j] == l)
		{
			return (0);
			break;
		}
		j++;
	}
	return (1);
}


int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_check_double(argv[1], argv[1][i], i) == 1)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			else
				i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (ft_check_double(argv[1], argv[2][j], i) == 1)
			{
				if (ft_check_double(argv[2], argv[2][j], j) == 1)
				{
					write (1, &argv[2][j], 1);
					j++;
				}
				else
					j++;
			}
			else
				j++;
		}
	}
	write(1,"\n", 1);
	return (0);
}
