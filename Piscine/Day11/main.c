/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:55:54 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/01 10:45:46 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int		main(int ac, char **av)
{
	t_list		*list;
	t_list		*current;
	t_list		*nth;
	void		*info;
	void		*info2;
	int			size;
	int			n;

	list = NULL;
	info = "Hello";
	info2 = " World!";
	n = 0;

	// 00 Создание нового листа

	printf("   Ex 00 Creating an element with \"Hello\"\n");
	list = ft_create_elem(info);
	current = list;
	printf("The field data contains %s\n\n", (char *)current->data);

	// 01 Добавление элементов в конец листа

	printf("   Ex 01 Adding elements in the end of the list\n");
	ft_list_push_back(&current, info2);
	ft_list_push_back(&current, (void *)" Beer");
	ft_list_push_back(&current, (void *)" Yo-yo");
	while(current)
	{
		printf("%s->", (char *)current->data);
		current = current->next;
	}
	printf("\n\n");

	// 02 Добавление элемента в начало листа

	printf("   Ex02 Adding an element in front of the list\n");
	current = list;						// Возврат указателя в начало листа
	ft_list_push_front(&current, (void *)"Jeepers!");
	list = current;						//Обновляем list после добавления 1-го элем
	while(current)
	{
		printf("%s->", (char *)current->data);
		current = current->next;
	}
	printf("\n\n");

	// 03 Определение длинны листа (кол-ва элементов)

	printf("   Ex03 Size of the list measuring\n");
	current = list;						// Возврат указателя в начало листа
	size = ft_list_size(&current);
	printf("Size of the list = %d\n\n", size);
	current = list;						// Возврат указателя в начало листа

	// 04 Возврат значения data последнего элемента листа

	printf("   Ex04 Return the last element of the list\n");
	current = ft_list_last(current);
	printf("The last element of the list %s\n\n", (char *)current->data);
	current = list;						// Возврат указателя в начало листа

	// 05 Создание листа с вводом аргументов с командной строки
	
	printf("   Ex05 New list with command line arguments\n");
	current = ft_list_push_params(ac, av);		// Как вызывать функцию с параметрами?
	while (current)
	{
		printf("%s->", (char *)current->data);
		current = current->next;
	}
	printf("\n\n");
	current = list;						// Возврат указателя в начало list


	// 06 Возврат указателя на N-ный элемент листа list
	
	printf("   Ex06 Return N-th element of the list\n");
	printf("Size of the list = %d\n", size);
	n = 4;
	printf("N = %d\n", n);
	nth = ft_list_at(current, n);
	if (!nth)
		printf("Error. Pointer is NULL\n");
	else
		printf("N-th element = %s\n", (char *)nth->data);  
	printf("Current position of current = %s\n", (char *)current->data);
	ft_list_print(current);
	
	// 07 Очистка листа, присвоение всем указателям значения NULL.
	
	printf("   Ex07 Clearing all links from the list\n");
	ft_list_print(current);
	ft_list_clear(&current);
	ft_list_print(current);

	// 08 Реверс листа
	list = ft_list_push_params(ac, av);
	current = list;
	ft_list_print(current);				// Надо ли возвращать указатель?
	current = list;
	ft_list_reverse(&current);
	ft_list_print(current);
	return (0);
}

