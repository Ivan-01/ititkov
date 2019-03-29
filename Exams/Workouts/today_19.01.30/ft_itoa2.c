/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 08:59:26 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/30 15:18:24 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

char		*ft_itoa(int n)
{
	int				lent;
	char			*array;
	const int		INT_MAX = 2147483647;
	const int		INT_MIN = -2147483648;

	if (n < INT_MIN || n > INT_MAX)
		return (NULL);
	lent = ft_num_lent(n);
	array = (char *)malloc(sizeof(char) * lent);
	if (!array)
		return (NULL);
	if (n < 0)
	{
		array[0] = '-';
		n = n * - 1;		// Берём модуль
	}
	lent--;					// Уменьшаем на 1 для использовании в качестве индекса
	array[lent--] = '\0';
	while (n > 9)
	{
		array[lent--] = n % 10 + '0';
		n = n / 10;
	}
	array[lent] = n + '0';
	printf("array = %s\n", array); // Строка сформирована прафильно
	return (array);
}

int			main(void)
{

	long			n;
	int				lent;
	char			*array;


	n = 92834798;
	lent = ft_num_lent(n);
	array = ft_itoa(n);
	printf("Number = %ld, Length = %d\n", n, lent);
	printf("Array  = %s\n", array);
}

