/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:23:48 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/01 12:37:43 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_reverse(t_list **begin_list)
{
	t_list		*tmp;
	t_list		*tmp2;
	t_list		*list;

	list = *begin_list;		// 
	if (list == 0 || list->next == 0)
		return ;
	tmp = list->next;		// Сохраняем указатель list 0 -> 1 в tmp
	tmp2 = tmp->next;		// Сохраняем указатель tmp 1 -> 2 в tmp2
	list->next = 0;			// Стираем указатель list  0 -> 1 (копия есть в  tmp)
	tmp->next = list;		// Ставим указатель tmp->next на list
	while (tmp2)			 
	{
		list = tmp;			// Понял!
		tmp = tmp2;
		tmp2 = tmp2->next;
		tmp->next = list;
	}
	*begin_list = tmp;
}
	
