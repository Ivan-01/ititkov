/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:59:16 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/14 20:29:00 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void		*ft_create_elem(int data)
{
	t_list	*list;

	list = NULL;
	if (!data)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

void		*ft_push_node_top(t_list *list, int data)
{
	t_list	*new;

	new = NULL;
	if (!list || !data)
		return (0);
	new = ft_create_elem(data);
	new->next = list;
	list = new;
	return (list);
}

void		ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%d->", list->data);
		list = list->next;
	}
}

int		cmp(int a, int b)
{
	return (a <= b);
}

t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		temp;
	t_list	*cur;

	cur = lst;
	while (lst->next)
	{
		if (!(*cmp)(lst->data, lst->next->data))
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = cur;	// Поинтер на первый элемент остался, но изменились данные
			ft_print_list(lst);
			printf("\n");
		}		// Остаёмся на первом элементе, повторяем проход
		else
			lst = lst->next;
	}
	lst = cur;
	return (lst);
}		

int			main(int argc, char **argv)
{
	t_list	*list;
	int		i;
	int		n;

	list = NULL;
	i = 2;
	if (argc > 1)
	{
		n = atoi(argv[1]);
	list = ft_create_elem(n);
		while (--argc != 1)
		{
			n = atoi(argv[i++]);
			list = ft_push_node_top(list, (n));
		}
	}
	ft_print_list(list);
	printf("\n");
	list = sort_list(list, cmp);
	ft_print_list(list);
	printf("\n");
	return (0);
}

