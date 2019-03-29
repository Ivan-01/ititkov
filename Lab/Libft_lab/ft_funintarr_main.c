/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funintarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 17:18:25 by ititkov           #+#    #+#             */
/*   Updated: 2018/12/19 18:08:20 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "math.h"
#include "stdio.h"

/* Функция принимает в качестве аргумента строку int, длину строки и функцию
 * с аргументом типа int. Далее полученная функция применяется к каждому элементу
 * строки.
 */

int		mult(int i, int j)
{
	return (i * j);
}

void	ft_funintarr(int *array, int lent, int num, double (*f)(double, double))
{
	int		i;

	i = 0;
	if (f != NULL)
	{
		while (i <= lent)
		{
			array[i] = f(array[i], num);
			i++;
		}	
	}
}

int		main(void)
{
	int			array[5] = {1, 2, 3, 4 , 5};
	int			i = 0;
	
	ft_funintarr(array, 4, 2, pow);
	while (i < 5)
	{
		printf ("array[%d] = %d\n", i, array[i]);
		i++;
	}
	return (0);
}

