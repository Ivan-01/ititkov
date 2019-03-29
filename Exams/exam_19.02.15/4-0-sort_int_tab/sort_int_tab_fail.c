/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:49:06 by exam              #+#    #+#             */
/*   Updated: 2019/02/16 11:44:47 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_print_int(int *tab, unsigned int size)
{
	while (size--)
		printf("%d   ", *tab++);
}

void		sort_int_tab(int *tab, unsigned int size)
{
	int		i = 0;						// не unsigned int
	int		tmp = 0;

	while (i <= (size - 2))				// сравнение разных типов
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
			ft_print_int(tab, size);
			printf("\n");
		}
		else
		{
			i++;
		}
	}
}

int					main()
{
	int				tab [7] = {1, -3, 8, 0, 4, 2, 10};
	unsigned int	size = 7;

	ft_print_int(tab, size);
	printf("\n");
	sort_int_tab(tab, size);
	return(0);
}

