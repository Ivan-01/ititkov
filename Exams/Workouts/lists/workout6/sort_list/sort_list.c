/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:45:04 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 15:49:16 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void		ft_print_list(t_list *list)
{
	int		flag = 0;

	while (list)
	{
		if (flag == 0)
		{
			printf("%d", list->data);
			flag = 1;
		}
		else
			printf("->%d", list->data);
		list = list->next;
	}
	printf("\n");
}

t_list		*ft_create_elem(int data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list		*ft_push_params(int argc, char **argv)
{
	t_list	*list;
	t_list	*new;
	int		i = 1;

	list = ft_create_elem(atoi(argv[i++]));
	while (i < argc)
	{
		new = ft_create_elem(atoi(argv[i++]));
		new->next = list;
		list = new;
	}
	return (list);
}

int				cmp(int a, int b)
{
	return(a <= b);
}

t_list			*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list		*cur;
	int			tmp = 0;

	cur = lst;
	while (cur->next)
	{
		if (!cmp(cur->data, cur->next->data))
		{
			tmp = cur->data;
			cur->data = cur->next->data;
			cur->next->data = tmp;
			cur = lst;
			ft_print_list(cur);
		}
		else
			cur = cur->next;
	}
	return (lst);
}

int				main(int argc, char **argv)
{
	t_list		*list;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	list = sort_list(list, cmp);
	ft_print_list(list);
	return (0);
}
	
