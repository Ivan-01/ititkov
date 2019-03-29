/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:26:58 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 09:12:29 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int				main(int argc, char **argv)
{
	t_list		*list = NULL;
	int			size;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	size = ft_list_size(list);
	printf("list size = %d\n", size);
	return (0);
}

