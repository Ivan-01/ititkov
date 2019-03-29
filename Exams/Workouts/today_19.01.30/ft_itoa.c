/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 08:59:26 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/30 11:14:46 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*
void		ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int			ft_num_lent(int n)
{
	int		lent;

	lent = 0;

	if (n < 0)
	{
		lent++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		lent++;
	}
	lent += 2;			// Дополнительное поле для знака '\0'
	return (lent);
}

void		ft_putnbr(char *tmp, int n)
{
	if (n < 10)
	{
		*tmp = (n + '0');
		printf("%c\n", *tmp);
		tmp++;			// Почему не происходит смещение адреса?
	}
	else
	{
		ft_putnbr(tmp, (n / 10));
		*tmp = (n % 10 + '0');
		printf("%c\n", *tmp);		
		tmp++;			// Почему не происходит смещение адреса?
	}
}

char		*ft_itoa(int n)
{
	int		lent;
	char	*array;
	char	*tmp;
	
	
	lent = ft_num_lent(n);
	array = (char *)malloc(sizeof(char) * lent);
	tmp = array;
	if (n < 0)
	{
		*tmp = '-';
		tmp++;
		n = n * - 1;		// Берём модуль
	}
	ft_putnbr(tmp, n);
	tmp[lent - 1] = '\0';
	return (array);
}

int			main(void)
{

	int		n;
	int		lent;
	char	*array;
	int		i;


	n = 128;
	lent = ft_num_lent(n);
	array = ft_itoa(n);			// Почему в array[0] восьмёрка?
	i = 0;
	printf("Number = %d, Length = %d\n", n, lent);
	while (i <= lent -1)
		printf("Array of numbers = %c\n",array[i++]);
	return (0);
}

