/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 09:30:54 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/26 08:47:02 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct      	s_list
{
    struct s_list   	*next;
    void            	*data;
}                   	t_list;

void			ft_print_list(t_list *list)
{
	if (!list)
		printf("NULL");
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

int				cmp(void *a, void *b)
{
	printf("a = %s,   b = %s\n", (char *)a, (char *)b);
	return (strcmp((char *)a, (char *)b));					// Библиотечная функция string.h      
}

void			ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;
	t_list		*cur;

	while ((*begin_list) && !cmp((*begin_list)->data, data_ref))	// Не забываем скобки (*list)-> Не забываем восклицательный знак!
	{
		tmp = (*begin_list);
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	cur = (*begin_list);
	while ((cur) && (cur->next))								// Не забываем cur
	{
		if (!cmp(cur->next->data, data_ref))					// Не забываем next->data
		{
			tmp = cur->next;
			cur->next = tmp->next;
			free (tmp);
		}
		else
			cur = cur->next;
	}
}

int				main(int argc, char **argv)
{
	t_list		*list;
	void		*data_ref;

	list = ft_push_params(argc, argv);
	data_ref = "I";
	ft_print_list(list);
	ft_list_remove_if(&list, data_ref, cmp);
	ft_print_list(list);
	return (0);
}

