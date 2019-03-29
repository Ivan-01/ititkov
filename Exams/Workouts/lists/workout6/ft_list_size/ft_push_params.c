/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:14:17 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 08:53:02 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list				*ft_push_params(int argc, char **argv)
{
	t_list			*list = NULL;
	t_list			*new = NULL;
	int				i = 1;

	if (argc == 1)
		return (NULL);
	list = ft_create_elem(argv[i++]);
	if (!list)
		return (NULL);
	while (i < argc)
	{
		new = ft_create_elem(argv[i++]);
		new->next = list;
		list = new;
	}
	return (list);
}
