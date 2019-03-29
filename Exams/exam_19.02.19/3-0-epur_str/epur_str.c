/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:41:19 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 10:38:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_epur(char *str)
{
	char 		pr;
	int			flag = 0;

	pr = 'a';

	while (*str)
	{
		if (*str != ' ' && *str != '\t')
		{
			if ((pr == ' ' || pr =='\t') && flag!= 0)
				ft_putchar(' ');
			pr = *str;
			ft_putchar(*str++);
			flag = 1;
		}
		else if (pr != ' ' && pr != '\t')
		{
			pr = ' ';
			str++;
		}
		else
			str++;
	}
}

int				main(int argc, char **argv)
{
	
	if (argc == 2)
		ft_epur(argv[1]);
	ft_putchar('\n');
	return(0);
}

