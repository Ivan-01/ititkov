/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 08:34:10 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 08:56:12 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void            f(void *data)
{
    char        *str;
    char        *begin;

    str = (char *)data;
    begin = str;
    while (*str)
        str++;
    while (--str >= begin)
        printf("%c", *str);
	printf(" -> ");
}

int				main(int argc, char **argv)
{
	t_list		*list;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	ft_list_foreach(list, f);
	return (0);
}

