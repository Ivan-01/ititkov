/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 19:38:55 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/05 08:37:43 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
 * Что-то здесь не то
 *
 * Декларируем функцию, которая получает список list типа t_list
 * и указатель на данные data. *list - значение последнего элемента списка
*/ 
t_list		*ft_add_node_front(t_list *list, void info)
{
	t_list		*new; // Создаём новый список на случай если list = NULL

	if (list == NULL) // проверяем аргумент list, если плохой создаём его сами
	{
		list = (t_list *)malloc(sizeof(t_list)); //Лоцируем память под элемент
		list->data = info;
		list->next = NULL;
		return (list) // После создания list выполнение прекращается
	}
	new = (t_list *)malloc(sizeof(t_list));
	list->data = data;
	list->next = list;
	return (new);
}
