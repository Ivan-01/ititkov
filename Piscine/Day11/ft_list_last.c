/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:06:50 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/24 11:10:10 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

 t_list		*ft_list_last(t_list *begin_list)
{
	t_list		*list;

	if (!begin_list)
		return(NULL);
		list = begin_list;
	while (list->next)
		list = list->next;
	return (list);
}
