/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 08:46:31 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/31 09:31:10 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			*ft_rrange(int start, int end)
{
	int		lent;
	int		*array;

	lent = 0;
	lent = (end - start >= 0) ? (end - start + 1) : (start - end + 1);
	array = (int *)malloc(sizeof(int) * lent);
	if (!array)
		return (NULL);
	while (lent--)			// Декрементирует на 1 в первом цикле!
	{						// Пропускает 0 в последнем цикле!
		array[lent] = (end - start >= 0) ? (start++) : (start--);
		printf("array[%d] = %d\n", lent, array[lent]);
	}
	return (array);
}

int			main(int argc, char **argv)
{
	int		start;
	int		end;
	int		lent;
	int		*array;

	start = atoi(argv[1]);
	end = atoi(argv[2]);
	lent = (end - start >= 0) ? (end - start + 1) : (start - end + 1);
	array = ft_rrange(start, end);
	printf("start = %d, end = %d\n", start, end);
	while (lent--)
		printf("array element = %d   ", *array++);
	return (0);
}

