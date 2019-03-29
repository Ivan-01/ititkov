/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:20:18 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 09:12:09 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void				ft_print_list(t_list *list)
{
	int				flag = 0;
	
	while (list)
	{
		if (flag)
			printf(" -> %s", (char *)list->data);
		else
		{
			flag++;
			printf("%s", (char *)list->data);
		}
		list = list->next;
	}
	printf("\n");
}
