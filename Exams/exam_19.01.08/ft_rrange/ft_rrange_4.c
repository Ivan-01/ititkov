/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:41:29 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/10 12:26:01 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		*array;
	int		lent;

	if (end >= start)
		lent = end - start + 1;
	if (end < start)
		lent = start - end + 1;
	array = (int *)malloc(sizeof(int) * (lent));
	if (!array)
		return (NULL);
	if (end >= start)
	{
		while (end >= start)
			*array++ = end--;
	}
	else if (end < start)
	{
		while (end <= start)
			*array++ = end++;
	}
	return(array - lent);
}

int		main(void)
{
	int		start, end, lent;
	int		*array;

	start = 2;
	end = -3;
	lent = (end >= start) ? (end - start) : (start - end);
	array = ft_rrange(start, end);
	printf("start = %d, end = %d\n", start, end); 
	while (lent-- >= 0)
		printf("Element of array = %d\n", *array++);
	return (0);
}		
