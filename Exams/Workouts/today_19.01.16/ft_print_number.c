/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 09:03:22 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/16 09:36:17 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_print_number(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

int		main(void)
{
	int		n = 173;

	ft_print_number(n);
	return (0);
}

