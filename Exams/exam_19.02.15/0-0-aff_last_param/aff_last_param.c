/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:06:13 by exam              #+#    #+#             */
/*   Updated: 2019/02/15 09:12:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_print_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int				main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_str(argv[--argc]);
	write (1, "\n", 1);
	return (0);
}
	
