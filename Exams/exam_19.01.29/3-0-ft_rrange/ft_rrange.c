/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 10:58:45 by exam              #+#    #+#             */
/*   Updated: 2019/01/29 11:54:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int		*array;
	int		lent;

	lent = 0;
	lent = (end >= start) ? (end - start + 1) : (start - end + 1);
	array = (int *)malloc(sizeof(int) * lent);
	lent--;
	while (lent >= 0)
	{
		array[lent] = (end >= start) ? (start++) : (start--);
		lent--;
	}
	return (array);
}

