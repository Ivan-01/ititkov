/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 11:37:20 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/25 12:42:35 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
/*
 * Написать функцию, которая возвращает указатель на N-ный элемент листа
 * В случае ошибки возвращает NULL
 * Нумерация начинается с первого элемента листа (последний добавленный)
 * Нумерация начинается с 0 или с 1?
*/
t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	
	i = 0;
	while (i++ != nbr)
	{
		if (begin_list->next == NULL)
			return (NULL);
		else
			begin_list = begin_list->next;
	}
	return(begin_list);
}
