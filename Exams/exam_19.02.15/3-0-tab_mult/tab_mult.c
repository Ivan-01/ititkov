/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:22:56 by exam              #+#    #+#             */
/*   Updated: 2019/02/15 10:46:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_print_nbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}
		
int			ft_put_nbr(char *str)
{
	int		n = 0;
	
	while (*str)
		n = n * 10 + (*str++) - '0';
	return (n);
}

void		ft_tab_mult(int nbr)
{
	int		i = 1;

	while (i < 10)
	{
		ft_putchar(i + '0');
		write (1, " x ", 3);
		ft_print_nbr(nbr);
		write(1, " = ", 3);
		ft_print_nbr(i++ * nbr);
		ft_putchar('\n');
	}
}

int			main(int argc, char **argv)
{
	int		nbr = 0;

	if (argc == 2)
	{
		nbr = ft_put_nbr(argv[1]);
		ft_tab_mult(nbr);
	}
	else
		ft_putchar('\n');
	return (0);
}

