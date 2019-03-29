/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:59:03 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/14 15:25:53 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	unsigned char	lent;
	int				*array;

	lent = (end >= start) ? (end - start + 1) : (start - end + 1);
	array = (int *)malloc(sizeof(int) * (lent));
	while (lent)
		array[--lent] = (end >= start) ? (start++) : (start--);
	return (array);
}

int		main(void)
{
	int		start;
	int		end;
	int		lent;
	int		*array;


	start = 0;
	end = -3;
	lent = (end >= start) ? (end - start + 1) : (start - end + 1);
	array = ft_rrange(start, end);
	while (lent--)
		printf("%d   ",*array++);
	return (0);
}	
