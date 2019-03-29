/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if_4.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 19:41:47 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/17 21:15:52 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>				// Удалить перед сдачей
#include <string.h>				// Удалить перед сдачей


typedef struct      	s_list
{
    struct s_list   	*next;
    void            	*data;
}                   	t_list;

void			ft_list_print(t_list *list)
{
	while (list)
	{
		printf("%s->", (char *)list->data);
		list = list->next;
	}
	printf("\n");
}

t_list			*ft_list_create_elem(void *data)
{
	t_list		*list;

	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return(NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}


t_list			*ft_list_push_params(int argc, char **argv)
{
	t_list		*list;
	t_list		*new;
	int			i = 1;

	list = ft_list_create_elem(argv[i++]);
	while (i < argc)
	{
		new = ft_list_create_elem(argv[i++]);
		new->next = list;
		list = new;
	}
	return (list);
}

int				cmp(void *a, void *b)
{
	return (strcmp((char *)a, (char *)b));
}

void			ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*tmp;
	t_list		*cur;

	while (*begin_list && (!(*cmp)((*begin_list)->data, data_ref)))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	cur = *begin_list;
	while (cur && cur->next)
	{
	 	if (!(*cmp)(cur->next->data, data_ref))
		{
			tmp = cur->next;
			cur->next = tmp->next;
			free(tmp);
		}
		cur = cur->next;			// Не понимаю. Если узел 2 удалён
	}					// то следующая пара для проверки 1 - 3
}						// Если мы переходим к 3, то мы его не проверяем
						// Надо стоять на 1 для проверки 3

int				main(int argc, char **argv)
{
	t_list		*list;
	void		*data_ref = "3";

	list = ft_list_push_params(argc, argv);
	ft_list_print(list);
	ft_list_remove_if(&list, data_ref, cmp);
	ft_list_print(list);
	return (0);
}

