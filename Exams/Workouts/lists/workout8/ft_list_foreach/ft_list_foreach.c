/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 09:07:15 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/24 09:29:43 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void			ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", (char *)list->data);
		list = list->next;
	}
	printf("\n");
}

t_list			*ft_create_elem(void *data)
{
	t_list		*list;

	if (!data)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list) * 1 );
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list			*ft_push_params(int argc, char **argv)
{
	t_list		*list;
	t_list		*new;
	int			i = 1;

	list = ft_create_elem(argv[i++]);
	while (i < argc)
	{
		new = ft_create_elem(argv[i++]);
		new->next = list;
		list = new;
	}
	return (list);
}

void			f(void *data)
{
	char		*str;
	int			i = 0;

	str = (char *)data;
	while (*str++)
		i++;
	printf("%d -> ", i);
}

void			ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

int			main(int argc, char **argv)
{
	t_list	*list;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	ft_list_foreach(list, f);
	printf("\n");
	return (0);
}

