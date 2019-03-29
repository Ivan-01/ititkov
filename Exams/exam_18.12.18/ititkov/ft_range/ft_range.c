/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 10:00:03 by exam              #+#    #+#             */
/*   Updated: 2018/12/18 12:07:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

int     *ft_range(int start, int end)
{
	int			*array;
	int			size;
	int			i;

	printf("start %d, end %d\n", start, end);
	if (start > end)
		size = start - end + 1;
	if (start < end)
		size = end - start + 1;
	if (start == end)
		size = 1;
	printf("size = %d\n", size);
	array = (int*)malloc(size);
	i = 0;
	if (start > end)
	{
		while (start != end)
		{
			array[i] = start;
			start--;
			i++;
		}
		array[i] = end;
	}
	if ( start <= end)
	{
		while (start != end)
		{
			array[i] = start;
			start++;
			i++;
		}
		array[i] = end;
	}
	return (array);
}

int		main(void)
{
	int		start, end, i;
	int		*array;

	start = -1;
	end = 2;
	i = 0;
	array = ft_range(start, end);

	printf("first value = %d\n", array[i]);
	while (i <= (end - start))
	{
		printf("consecutive velues %d\n", array[i]);
		i++;
	}
}

