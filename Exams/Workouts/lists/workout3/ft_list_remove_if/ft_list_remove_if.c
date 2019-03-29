/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 15:52:15 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 09:53:05 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"


void			ft_list_print(t_list *list)
{
	int		flag;

	flag = 0;
	while (list)
	{
		if (flag == 0)
		{
			printf("%s", (char *)list->data);
			flag++;
		}
		else
		{
			printf("->%s", (char *)list->data);
			flag++;
		}
		list = list->next;
	}
	printf("\n");
}

t_list			*ft_create_elem(void *data)
{
	t_list		*list;

	list = NULL;
	if (!data)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list) * 1);
	if (!list)
		return (NULL);
	list->data = data;   // Как проверить попадает ли в дата знак конца строки? Подозреваю что нет.
	list->next = NULL;
	return (list);
}

t_list			*ft_list_push_param(int argc, char **argv)
{
	t_list		*list;
	t_list		*new;
	int			i;

	i = 2;
	if (argc < 2)
		return (NULL);
	list = ft_create_elem(argv[1]);
	while (i < argc)
	{
		new = ft_create_elem(argv[i++]);
		if (!new)
			return(NULL);
		new->next = list;
		list = new;
	}
		return(list);
}

int				cmp(void *arg1, void *arg2)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *)arg1;
	printf ("str1 = %s   ", str1);
	str2 = (char *)arg2;
	printf ("str2 = %s   \n", str2);
	i = 0;
	while (str1[i] == str2[i] && str1[i++] && str2[i++])  // Выясть почему была хрень с поинтерами!
		;
	printf("str1 = %s   str2 = %s\n", str1, str2);
	printf("*str1 - *str2 = %d\n\n", (*str1 -*str2));
	return (*str1 - *str2);
}

/* Функция связывает предыдущий узел с последующими или нет? Нет, не связывает!
 * Она просто разрывает лист на несколько листов в тех местах, где удаляет узлы
 * Overthinking — моя проблема.
 */

void			ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
/*	t_list		*tmp;

	if (!(*begin_list) || !data_ref || !cmp)
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
		{
			tmp = (*begin_list)->next;
			free(*begin_list);		// Почему после удаления данных всёравно печатается весь список?
			*begin_list = NULL;		// Ведь World уже не содержит указателя на Hello!
			ft_list_remove_if(&(tmp), data_ref, cmp);
		}
	else
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
*/

	t_list	*tmp;
	t_list	*i;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	i = *begin_list;
	while (i && i->next)
	{
		if (cmp(i->next->data, data_ref) == 0)		// Непраильно работает!
		{
			tmp = i->next;
			i->next = tmp->next;
			free (tmp);
		}
		i = i->next;								//Должно быть else!
	}

}

int				main(int argc, char **argv)
{
	t_list		*list;
	void		*data_ref;

	list = NULL;
	data_ref = "3";
	list = ft_list_push_param(argc, argv);
	ft_list_print(list);
	ft_list_remove_if(&list, data_ref, cmp);
	ft_list_print(list);
	return (0);
}
	
