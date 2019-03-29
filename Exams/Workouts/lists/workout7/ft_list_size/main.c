/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 08:18:04 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 08:24:29 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int				main(int argc, char **argv)
{
	t_list		*list;
	int			size = 0;

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	size = ft_list_size(list);
	printf("size = %d\n", size);
	return (0);
}

