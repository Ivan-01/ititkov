/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 10:41:42 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 11:02:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			cmp(int a, int b)
{
	return (a <= b);
}

void		sort_int_tab(int *tab, unsigned int size)
{
	unsigned int 	i = 0;
	int				tmp;

	while (i < (size - 1))
	{
		if (!cmp (tab[i], tab[i + 1]))
		{
			tmp = tab[i];
			tab[i] = tab[ i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
