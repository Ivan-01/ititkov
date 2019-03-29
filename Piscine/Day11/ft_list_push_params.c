/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:22:03 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/28 12:09:13 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*new;
	t_list		*params;

	i = 1;
	new = NULL;
	params = NULL;
	while (i < ac)
	{
		new = ft_create_elem(av[i++]);
		if (!params)
			params = new;			// params - это begin_list в push_front
		else
		{
			new->next = params;
			params = new;
		}
	}
	return (params);
}
