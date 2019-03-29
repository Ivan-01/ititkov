/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:26:58 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 10:20:46 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void            f(void *data)
{
	char       *begin;
	char		*str;
	
	str = (char *)data;
	begin = str;
    while(*str)				// В конце цикла указатель должен стоять на \0!
         str++;
	while (begin <= --str)	// Почему он там не стоит?
		printf("%c", *str);
	printf(" -> ");
 }

int				main(int argc, char **argv)
{
	t_list		*list = NULL;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	ft_list_foreach(list, f);
	return (0);
}

