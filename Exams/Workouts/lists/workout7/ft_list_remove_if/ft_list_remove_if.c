/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:01:45 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 09:53:55 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void		ft_print_node(t_list *list)
{
	char	*str;

	str = (char *)list->data;
	printf("%s\n", str);
}

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;
	t_list		*list;

	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	list = *begin_list;
	while (list->next)
	{
		if ((*cmp)(list->next->data, data_ref) == 0) // Не правильно работает!
		{
			tmp = list->next;
			list->next = tmp->next;
			free(tmp);
			ft_print_node(list);
		}
		else
			list = list->next;
	}
}
