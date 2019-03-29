/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 10:02:44 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/05 08:28:15 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void		ft_list_print(t_list *begin_list)
{
	int		flag;

	flag = 0;
	if (!begin_list)
		printf("NULL");
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

t_list		*ft_create_elem(void *data)
{
	t_list		*list;

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

t_list		*ft_push_params(int argc, char **argv)
{
	int		i;
	t_list	*list;
	t_list	*new;

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

			
int			ft_list_size(t_list *begin_list)
{
	int		lent;

	lent = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		lent++;
	}
	return (lent);
}
		
int		main(int argc, char **argv)
{
	t_list		*list;
	t_list		*current;
	
	list = ft_push_params(argc, argv);
	current = list;
	ft_list_print(current);
	current = list;
	printf("List's size = %d", ft_list_size(current));
	return (0);
}

