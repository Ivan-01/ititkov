/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 11:35:38 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/05 08:29:56 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void			ft_list_print(t_list *begin_list)
{
	int			flag;
	
	if (!begin_list)
		printf("NULL");
	flag = 0;
	while (begin_list)
	{
		if (flag == 0)
		{
			printf("%s", (char *)begin_list->data);
			begin_list = begin_list->next;
			flag = 1;
		}
		else
		{
			printf("->%s", (char *)begin_list->data);
			begin_list = begin_list->next;
		}
	}
	printf("\n");
}

t_list			*ft_create_elem(void *data)
{
	t_list		*list;

	if (!data)
		return (NULL);
	list = NULL;
	list = (t_list *)malloc(sizeof(t_list) * 1);
	list->data = data;
	list->next = NULL;
	return (list);
}
	
t_list			*ft_push_params(int	argc, char **argv)
{
	t_list		*list;
	t_list		*new;
	int			i;

	list = NULL;
	new	= NULL;
	i = 2;
	if (argc < 2)
		return (NULL);
	list = ft_create_elem(argv[1]);
	while (i < argc)
	{
		new = ft_create_elem(argv[i++]);
		new->next = list;
		list = new;
	}
	return (list);
}

void			ft_strlent(char *str)
{
	int			lent;

	lent = 0;
	while (*str++)
		lent++;
	printf("%d  ", lent);
}

void			ft_list_foreach(t_list *begin_list, void (*f)())
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

int				main(int argc, char **argv)
{
	t_list		*list;

	list = ft_push_params(argc, argv);
	ft_list_print(list);
	ft_list_foreach(list, ft_strlent);
	return (0);
}	
