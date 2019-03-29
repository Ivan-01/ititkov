/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 08:48:39 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/17 09:26:08 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%s->", (char *)list->data);
		list = list->next;
	}
	printf("\n");
}

