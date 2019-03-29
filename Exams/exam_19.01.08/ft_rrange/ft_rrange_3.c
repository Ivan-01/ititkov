/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 19:02:22 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/09 19:34:28 by ititkov          ###   ########.fr       */
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
	if (end >=start)
	{
		while (end >= start)
			*array++ = end--;
	}
	else
	{
		while (end <= start)
			*array++ = end++;
	}
	return (array - lent);
}

int		main(void)
{
	int		start, end, lent, i;
	int		*array;

	start = 2;
	end = 6;
	lent = (end >= start) ? (end - start) : (start - end);
	printf("start = %d,   end = %d   lent = %d\n", start, end, lent);
	array = ft_rrange(start, end);
	while (lent-- >= 0)
		printf("Element = %d\n", *array++);
	return(0);
}	
