/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 09:17:28 by exam              #+#    #+#             */
/*   Updated: 2019/02/05 09:33:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write (1, &c, 1);
}

void		ft_repeat(char c)
{
	int		re;

	re = 1;
	if (c >= 'a' && c <= 'z')
		re = re + c - 'a';
	else if (c >= 'A' && c <= 'Z')
		re = re + c - 'A';
	while (re-- > 0)
		ft_putchar(c);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			ft_repeat(*argv[1]++);
	}
	ft_putchar('\n');
	return (0);
}
		
