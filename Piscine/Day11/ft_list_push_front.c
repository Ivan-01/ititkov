/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 17:10:04 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/21 21:01:17 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"


/*
 * Функция без output. Не ясно как проверить результат.
*/ 

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*new;

	new = NULL;
	if (!*begin_list)
	{
		(*begin_list) = (t_list *)malloc(sizeof(t_list) * 1);
		(*begin_list)->next = NULL;
		(*begin_list)->data = data;		// Не уверен
	}
	else
	{
		new = (t_list *)malloc(sizeof(t_list) * 1);
		new->next = *begin_list;
		new->data = data;
		*begin_list = new;
	}
}
	
