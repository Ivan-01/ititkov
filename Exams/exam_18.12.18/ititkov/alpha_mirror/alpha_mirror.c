/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:26:24 by exam              #+#    #+#             */
/*   Updated: 2018/12/18 09:56:11 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_alpha_mirror(char c)
{
	char	l;
	
	if (c >= 'a' && c <= 'm')
		l = 'z' - c + 'a';
	else if (c >= 'A' && c <= 'M')
		l = 'Z' - c + 'A';
	else if (c >= 'n' && c <= 'z')
		l = 'z' - c + 'a';
	else if (c >= 'N' && c <= 'Z')
		l = 'Z' - c + 'A';
	else
		l = c;
	return (l);
}
	
int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int		i;

		i = 0;
		while (argv[1][i])
		{
			ft_putchar(ft_alpha_mirror(argv[1][i]));
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

