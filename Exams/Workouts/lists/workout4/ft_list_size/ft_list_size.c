/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:30:50 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/11 21:53:14 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 				// Удалить перед сдачей!
#include <stdlib.h>				// Удалить перед сдачей!
#include "ft_list.h"

t_list			*ft_create_elem(void *data) 		// Удалить перед сдачей!
{
	t_list		*list;

	if (!data)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->next = NULL;
	list->data = data;
	return (list);
}

int				ft_list_size(t_list *begin_list)
{
	int			i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int				main(void)
{
	t_list		*elem1;
	t_list		*elem2;
	int			lent;
	
	lent = 0;
	elem1 = ft_create_elem("Hello");
//	elem2 = ft_create_elem("World");
//	elem1->next = elem2;
	lent = ft_list_size(elem1);
	printf("list_size = %d\n", lent);
	return (0);
}

