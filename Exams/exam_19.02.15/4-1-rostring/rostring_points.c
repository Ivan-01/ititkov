/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring_points.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:45:33 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/15 15:53:44 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				ft_check_sp(char c)
{
	return((c == ' ' || c == '\t'));
}

void			ft_print_word(char *str)
{
	while (!ft_check_sp(*str) && *str)
		ft_putchar(*str++);
}

void			ft_rostring(char *str)
{
	int			flag = 0;
	char		*begin;
	char		*word;

	begin = str;
	word = NULL; 	// Почему не ругается? stdlib не включена!
	while (*str)
	{
		if (!ft_check_sp(*str) && begin == str)
		{
			flag = 1;
			word = str++;
		}
		if (!ft_check_sp(*str) && ft_check_sp(*(str - 1)))
		{
			if (flag == 0)
			{
				word = str++;
				flag = 1;
			}
			else
			{
				ft_print_word(str++);
				ft_putchar(' ');
			}
		}
		else
			str++;
	}
	if (word)
		ft_print_word(word);
}

int				main(int argc, char **argv)
{
	if (argc >= 2)
		ft_rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}

