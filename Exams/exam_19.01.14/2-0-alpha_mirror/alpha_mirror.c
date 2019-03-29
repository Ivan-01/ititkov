/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:50:38 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 10:11:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}

char	ft_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - c + 'a';
	else if (c >= 'A' && c <= 'Z')
		c = 'Z' - c + 'A';
	return (c);
}	

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		while (*argv[1])
			ft_putchar(ft_alpha(*argv[1]++));
	}
	ft_putchar('\n');
	return(0);
}

