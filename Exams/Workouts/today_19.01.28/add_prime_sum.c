/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:14:36 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/28 21:46:10 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		n;

	n = 0;
	while ((*str) && (*str >= '0' && *str <= '9'))
			n = n * 10 + (*str++ - '0');
	return (n);
}

void	ft_putnbr(int n)
{
	if (n < 10)
		ft_putchar (n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

int		ft_check_prime(int n)
{
	int		prm;
	
	prm = n;
	n--;
	while (n > 1)
	{
		if (prm % n == 0)
			return (0);
		else
			n--;
	}
	return (prm);
}

int		ft_prime_sum(int n)
{
	int		sum;

	sum = 0;
	while (n > 1)
		sum = sum + ft_check_prime(n--);
	return (sum);
}

int		main(int argc, char **argv)
{
	int		n;
	int		sum;

	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n > 0)
		{
			sum = ft_prime_sum(n);
			ft_putnbr(sum);
		}
		else
			ft_putchar('0');
	}
	else
		ft_putchar('0');
	return (0);
}

