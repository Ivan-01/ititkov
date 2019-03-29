/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:14:36 by exam              #+#    #+#             */
/*   Updated: 2019/02/15 09:24:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_repeat_alpha(char c)
{
	int		r;

	r = 1;
	if (c >= 'a' && c <= 'z')
		r = r + c - 'a';
	else if (c >= 'A' && c <= 'Z')
		r = r + c - 'A';
	while (r--)
		write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			ft_repeat_alpha(*argv[1]++);
	}
	write(1, "\n", 1);
	return (0);
}

