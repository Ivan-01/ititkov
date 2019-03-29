/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:30:35 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/23 09:24:52 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*new;		// Переменная для нового элемента
	t_list 		*cur;		// Переменная для защиты входящего аргумента **

	new = NULL;				// Инициализация указателя
	cur	= NULL;				// Инициализация указателя
	if (!*begin_list)
	{
		(*begin_list) = (t_list *)malloc(sizeof(t_list) * 1);
		(*begin_list)->next = NULL;
		(*begin_list)->data = data;
	}
	else
	{
		new = (t_list *)malloc(sizeof(t_list) * 1);		// Создать новый эелемент
		new->next = NULL;		// Присвоить новому элементу указатель на NULL
		new->data = data;		// Присвоить новому элементу данные data.
		cur = *begin_list;
	}  							// Присвоить переменной cur значение аргумента
	while (cur->next)			// Пока ссылка текущего элемента не NULL
		cur = cur->next;		// Переходим по ссылке
	cur->next = new;			// Когда дошли до конца, заменяем содержимое next
}						
