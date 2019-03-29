/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:40:40 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/16 18:59:38 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		n = n * 10 + *str++ - '0';
	return (sign * n);
}
		
int		main(void)
{
	char	str[] = "    -8913847&  ";

	printf("str is %s\n", str);
	printf("atoi is %d\n", ft_atoi(str));
	return (0);
}
