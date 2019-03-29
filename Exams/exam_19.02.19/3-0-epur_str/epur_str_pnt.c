/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str_pnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 19:01:38 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/19 20:03:24 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_check_sp(char c)
{
	return( c == ' ' || c == '\t');
}

void		ft_print_word(char *str)
{
	while (*str && ft_check_sp(*str))
		write(1, str++, 1);
}

void		ft_find_words(char *str)
{
	int		flag = 0;

	while (*str)
	{
		if (!ft_check_sp(*str))
		{
			if (flag == 0)
			{
				ft_print_word(str++);
				flag = 1;
			}
			else if (ft_check_sp(*(str - 1)))
			{
				write(1, " ", 1);
				ft_print_word(str++);
			}
			else
				str++;
		}
		else
			str++;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		ft_find_words(argv[1]);
	write(1, "\n", 1);
	return (0);
}

