/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:09:59 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/07 20:46:30 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_doubles(char *str, char c, int p)
{
	int		i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
		{
			return (1);
			break ;
		}
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
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_check_doubles(argv[1], argv[1][i], i) == 0) // Если нет дублей в первой строке
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] ==  argv[2][j])
					{
						write(1, &argv[1][i], 1);
						j++;
						break;
					}
					else
						j++;
				}
				i++;
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
