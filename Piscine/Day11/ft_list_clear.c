/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 08:36:28 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/28 16:19:34 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void			ft_list_clear(t_list **begin_list)
{
	t_list		*tmp;
	t_list 		*current;

	current = *begin_list;
	while(current) {
		tmp = current->next;
		free(current);      // Функция free освобождает память под данными в узле
		current = NULL;		// но адрес в current продолжает храниться.
		current = tmp;
	}
	*begin_list = NULL;
}

