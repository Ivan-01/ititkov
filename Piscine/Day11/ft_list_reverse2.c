/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:42:27 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/30 19:53:18 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_add_back(t_list *list, void *data)
{
	t_list	*node;

	if (!list)
	{
		list = (t_list *)malloc(sizeof(t_list));
		list->data = data;
		list->next = NULL;
		return (list);
	}
	node = (t_list *)malloc(sizeof(t_list));
	node->data = data;
	node->next = list;
	return (node);
}

void		ft_list_reverse2(t_list	**begin_list)
{
	t_list		*new_list;

	new_list = NULL;
	while (*begin_list)
	{
		new_list = ft_list_add_back(new_list, (*begin_list)->data);
		(*begin_list) = (*begin_list)->next;
	}
	*begin_list = new_list;
}
