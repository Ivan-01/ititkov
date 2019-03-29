/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 09:50:52 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/21 19:23:07 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

t_list      *add_node_front(t_list *list, int data)
{
    t_list  *new;

	if (list == NULL)
    {
        list = (t_list *)malloc(sizeof(t_list));
        list->data = data;
        list->next = NULL;
        return (list);
    }
    new = (t_list *)malloc(sizeof(t_list));
    new->data = data;
    new->next = list;
    return (new);
}

t_list		*add_node_back(t_list *list, int	data)
{
	t_list	*new;
	t_list	*begin;

	if (list == NULL)
	{
		list = (t_list *)malloc(sizeof(t_list));
		list->data = data;
		list->next = NULL;
		return (list);
	}
	begin = list;
	new = (t_list *)malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	while (list->next)
		list = list->next;
	list->next = new;
	return (begin);
}

int		main(void)
{
	t_list	*list;

	list = NULL;
	list = add_node_front(list, 1);
	list = add_node_front(list, 2);
	list = add_node_front(list, 3);
	list = add_node_front(list, 4);
	printf("size = %d\n", ft_list_size(list));
	printf("list elem = %d\n", list->data);
	/*while (list)
	{
		printf("--%d\n", list->data);
		list = list->next;
	}*/
	
}
