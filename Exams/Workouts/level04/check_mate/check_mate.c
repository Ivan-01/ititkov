/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:47:33 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/06 16:22:32 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int				checkmate(int ac, char **av)
{
	int			y = 0;
	int			x = 0;
	int			lent = 0;
	int			b = 0;
	int			a = 0;
	char		**m;

	while (ac-- > 1)	// Считаем количество аргументов
		len++;
	if (!(m = (char **)malloc(sizeof(char *) * len (len + 1)))) // Создаём матрицу
		return (0);  // Чтобы заполнить её данными из командной строкри
	у = 0;				// Лишняя операция, у инициализирован в декларации
	while (y < lent)	// Идём по вертикали
	{
		if (!m[y] = (char *)malloc(sizeof(char) * (len + 1))) // Проверяем создание строк
			return (0);
		x = 0;
		while (av[y + 1][x]) // Идём по вертикали до конца Y.
		{
			m[y][x] = av[y + 1][x];	// Если поле существует, переходим на него
			if (m[y][x] == 'K')		// Если в поле стоит Король
			{
					a = x;			// сохраняем координаты поля
					b = y;
			}
			++x;
		}
		m[y][x] = 0;
		++y;
	}





