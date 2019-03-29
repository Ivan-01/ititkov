/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:57:40 by exam              #+#    #+#             */
/*   Updated: 2019/01/30 09:08:07 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}


void		ft_putnbr(int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar (n % 10 + 48);
	}
}
/*
char		*ft_itoa(int nbr)
{
	int		n;
	int		lent;
	char	*str

	n = nbr;
	lent = 0;
	while (n > 10)
	{
		n = n / 10;
		lent = lent + 1;
	}
	lent++;
	printf("lent  = %d\n");
	str = (char *)malloc(sizeof(char) * lent);
	
}
*/

int			main(void)
{
	int		n;

	n = 128;
	ft_putnbr(n);
	return (0);
}	

