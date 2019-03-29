/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:25:09 by exam              #+#    #+#             */
/*   Updated: 2018/12/04 12:49:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find_start (char a, char b)
{
	if ((a == ' ' | a == '\t') && (b != ' ' && b !='\t' && b != '\0'))
		return (0);
	else
		return (1);
}

int		ft_find_end (char a, char b)
{
	if ((b == ' ' | b == '\t' | b == '\0') && (a != ' ' && a !='\t' && a != '\0'))
		return (0);
	else
		return (1);
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (i == 0 && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i+1] == '\0')
			{
				write (1, &argv[1][i], 1);
				write (1, "   ", 3);
				i++;
			}
			if (ft_find_start (argv[1][i], argv[1][i+1]) == 0)
			{
				i++;
				while (ft_find_end (argv[1][i], argv[1][i+1]) == 1)
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				write(1, &argv[1][i], 1);
				write(1, "   ", 3);
			}
			else
				i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

