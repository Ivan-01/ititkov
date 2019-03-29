/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:26:58 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 12:50:33 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

int                 cmp(void *data, void *ref)
{
    return(strcmp((char *)data, (char *)ref));
}

int				main(int argc, char **argv)
{
	t_list		*list = NULL;
	void		*data_ref;

	data_ref = "I";

	list = ft_push_params(argc, argv);
	ft_print_list(list);
	ft_list_remove_if(&list, data_ref, cmp);
	ft_print_list(list);
	return (0);
}

