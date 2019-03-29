/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:12:53 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/13 20:26:50 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Красиво!

void		ft_putchar(c)
{
	write(1, &c, 1);
}

void		ft_print_word(char *str)
{
	while (*str && *str != ' ' && *str  != '\t')
		ft_putchar(*str++);
}

void		ft_find_words(char *str)
{
	int		i = 0;
	char	*start;

	start = str;
	while (*str)
		str++;
	str--;
	while (str != start)
	{
		if (*str != ' ' && *str != '\t' && ((*(str - 1)) == ' ' || (*(str - 1) == '\t')))
		{
			ft_print_word(str--);
			ft_putchar(' ');
		}
		str--;
	}
	ft_print_word(str);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		ft_find_words(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}

