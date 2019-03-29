/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 08:38:58 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/25 09:30:58 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


void			ft_putchar (char c)
{
	write(1, &c, 1);
}

int				ft_check_space(char c)
{
	return (c == ' ' || c == '\t');
}

void			ft_print_word(char *str)
{
	while ((*str) && !ft_check_space(*str))
		ft_putchar(*str++);
}

void			ft_rev_wstr(char *str)
{
	char		*begin;

	begin = str;
	while (*str)
		str++;
	while (str >= begin)
	{
		if (!ft_check_space(*str) && str == begin)
			ft_print_word(str);
		else if (!ft_check_space(*str) && ft_check_space(*(str - 1)))
		{
			ft_print_word(str);
			ft_putchar(' ');
		}
		str--;
	}
}

int				main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_wstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

