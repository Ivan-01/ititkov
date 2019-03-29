/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 09:57:04 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/28 16:11:35 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void		ft_list_print(t_list *begin_list)
{
	t_list		*current;
	int			flag;

	if (!begin_list) {
		printf("NULL\n");
		return ;
	}
	current = begin_list;
	flag = 0;
	while (current)
	{
		if (flag++ == 0)
			printf("%s", (char *)current->data);
		else
			printf("->%s", (char *)current->data);
		current = current->next;
	}
	printf("\n");
}

