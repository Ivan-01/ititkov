/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 08:48:20 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/24 09:06:32 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void		ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", (char *)list->data);
		list = list->next;
	}
}

t_list		*ft_create_elem(void *data)
{
	t_list 	*list;

	if (!data)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}

t_list		*ft_push_params(int argc, char **argv)
{
	int		i = 1;
	t_list	*list;
	t_list	*new;

	list = ft_create_elem(argv[i++]);
	while (i < argc)
	{
		new = ft_create_elem(argv[i++]);
		new->next = list;
		list = new;
	}
	return (list);
}

int			ft_list_size(t_list *begin_list)
{
	int		size = 0;

	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

int			main(int argc, char **argv)
{
	t_list	*list;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	printf("\n");
	printf("size = %d\n", ft_list_size(list));
	return (0);
}
