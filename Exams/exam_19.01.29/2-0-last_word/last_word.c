/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 09:21:54 by exam              #+#    #+#             */
/*   Updated: 2019/01/31 08:41:33 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(c)
{
	write(1, &c, 1);
}

int			ft_strlent(char *str)
{
	int		lent;

	lent = 0;
	while (str[lent])
		lent++;
	return (lent);
}

int			ft_check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\0')
		return (0);
	else
		return (1);
}

void		ft_last_word(char *str)
{
	int		lent;
	int		flag;

	lent = ft_strlent(str) - 1;
	flag = 0;
	while (lent >= 0)
	{
		if (ft_check_space(str[lent]) == 0)
		{
			if (flag == 0)
			{
				lent--;
				flag = 0;
			}
			else
			{
				lent++;
				break;
			}
		}
		else
		{
			if (lent > 0)
			{
				lent--;
				flag = 1;
			}
			else
				break;
		}
	}
	while (ft_check_space(str[lent]) == 1)
		ft_putchar(str[lent++]);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
