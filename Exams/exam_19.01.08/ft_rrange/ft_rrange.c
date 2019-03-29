/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:19:45 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/09 18:50:12 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		lent;
	int		*array;
	int		i;

	if (end >= start)
		lent = end - start + 1;
	if (end < start)
		lent = start - end + 1;
	array = (int *)malloc(sizeof(int) * (lent));
	if (!array)
		return (NULL);
	i = lent;
	if (end >= start)
	{
		while (i-- >= 1)
		{
			*array++ = end--;
			printf("*array = |%d|\nend = |%d|\ni = |%d|\n", *array, end, i);
		}
	}
	if (end < start)
	{
		while (i-- >= 1)
			*array++ = end++;
	}
	return (array - lent);
}

int		main(int argc, char *argv[])
{
	int		start;
	int		end;
	int		lent;
	int		*array;
	int		i;

	start = 2;
	printf("start = %d\n", start);
	end = 6;
	printf("end = %d\n", end);
	lent = end - start;
	array = ft_rrange(start, end);
	i = 0;
	while (lent >= 0)
	{
		printf("Значение  %d\n", array[i]);
		i++;
		lent--;
	}
	return (0);
}
