/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 19:02:09 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/16 19:55:54 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		printf("*str = %c\n", *str);
		n = n * 10 + *str++ - '0';
		printf("n = %d\n", (sign * n));
	}
	return (sign * n);
}

void	print_hex(int n)
{
	char	hex[] ="0123456789abcdef";

	if (n < 16)
		ft_putchar(hex[n]);
	else
	{
		print_hex(n / 16);
		ft_putchar(hex[n % 16]);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2 && ft_atoi(argv[1]) >= 0)
		print_hex(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
