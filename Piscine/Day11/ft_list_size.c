/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 10:06:42 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/23 11:26:24 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list **begin_list)
{
	int		size;
	
	size = 0;
	while ((*begin_list))
	{
		(*begin_list) = (*begin_list)->next;
		size++;
	}
	return (size);
}
	
