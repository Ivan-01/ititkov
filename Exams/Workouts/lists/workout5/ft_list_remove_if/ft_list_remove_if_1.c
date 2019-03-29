/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 09:53:24 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/17 12:21:34 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list_1.h"

void			ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%s->", (char *)list->data);
		list = list->next;
	}
	printf("\n");
}

int				cmp(void *node, void *ref)
{
	char		*str1;
	char		*str2;
	int			i = 0;

	str1 = node;
	str2 = ref;

	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	printf("*str1 = %d   str2 = %d\n", str1[i], str2[i]);
	printf("*str1 - *str2 = %d\n", str1[i] - str2[i]);
	return (str1[i] - str2[i]);
}
	
t_list			*ft_create_elem(void *data)
{
	t_list		*list;

	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
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

void			ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;
	t_list		*cur;

	while (*begin_list && (*cmp)((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	cur = *begin_list;
	while (cur && cur->next)
	{
		if ((*cmp)(cur->next->data, data_ref) == 0)
		{
			tmp = cur->next;
			cur->next = tmp->next;
			free (tmp);
		}
		cur = cur->next;
	}
}

int				main(int argc, char **argv)
{
	t_list		*list;
	void		*ref_data = "you";

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	ft_list_remove_if(&list, ref_data, cmp);
	ft_print_list(list);
	return (0);
}
	
