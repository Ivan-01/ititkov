/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 08:50:09 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/30 09:04:59 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(c)
{
	write(1, &c, 1);
}

void		ft_print_number(int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_print_number(n / 10);
		ft_putchar(n % 10 + 48);
	}
}

int			main(void)
{
	int		n;

	n = 128;
	ft_print_number(n);
	return (0);
}

