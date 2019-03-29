/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:57:29 by exam              #+#    #+#             */
/*   Updated: 2019/02/13 20:44:38 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  После проверки вместе с main удалил библиотеку stdilib.h!
*/


int				*ft_rrange(int start, int end)
{
	int		lent;
	int		*array;

	lent = 0;
	array = NULL;
	lent = ((end - start) >= 0) ? (end - start + 1) : (start - end + 1);
	array = (int *)malloc(sizeof(int) * lent);			//  Тупой дундук
	if (!array)
		return (NULL);
	while (lent)
		array[--lent] = ((end - start) >= 0) ? (start++) : (start--);
	return (array);
}

