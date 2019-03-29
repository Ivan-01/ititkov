/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 09:19:39 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/21 09:30:54 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list.h"

int				cmp(void *s1, void *s2)
{
	return((strcmp((char *)s1, (char *)s2)));
}

int				main(int argc, char **argv)
{
	t_list		*list;
	void		*data_ref;

	data_ref = "I";
	list = ft_push_params(argc, argv);
	ft_print_list(list);
	ft_list_remove_if(&list, data_ref, cmp);
	ft_print_list(list);
	return(0);
}

