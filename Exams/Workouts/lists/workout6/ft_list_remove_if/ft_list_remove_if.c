/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 10:59:23 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 09:46:31 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

/*
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

*/
void		ft_print_node(t_list *list)
{
	printf("%s\n", (char *)list->data);
}

void				ft_list_remove_if(t_list **begin_list, void *data_ref, \
					int (*cmp)())
{
	t_list		*list;
	t_list		*tmp;

	while ((*begin_list) && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
//		ft_print_node(list);
		tmp = (*begin_list)->next;		// Работеает
//		ft_print_node(tmp);
		free(*begin_list);
		(*begin_list) = tmp;
//		ft_print_node(list);
//		ft_print_list(list);
	}							// Почему возвращает указатель на удалённый узел?
	list = (*begin_list);
	while (list && list->next)
	{
		if	((*cmp)(list->next->data, data_ref) == 0)
		{
			tmp = list->next;
			list->next = tmp->next;
			free (tmp);
			list = list->next;
		}
		else
			list = list->next;
	}
}

