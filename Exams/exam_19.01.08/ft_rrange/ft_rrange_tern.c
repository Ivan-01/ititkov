/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange_tern.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:26:11 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/09 18:45:16 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		*array;
	int		lent;

	lent = (end >= start) ? (end - start + 1) : (start - end + 1);
	array = (int *)malloc(sizeof(int) * (lent));
	if (!array)
		return (NULL);
	while(lent--)
		array[lent] = (end >= start) ? (start++) : (start--); // идём с конца, поэтому start++ и start--
	return(array);			// возвращаем указатель в нулевой позиции. Это фишка почему мы идём с конца
}							// в противном случае пришлось бы переводить указатель в нулевую позицию
							// перед передачей в return.

int     main(void)
{
    int     start;
    int     end;
    int     lent;
    int     *array;
    int     i;
	
	start = 6
    	printf("start = %d\n", argc);
    end = 2;
    printf("end = %d\n", end);
    lent = (end >= start) ? (end - start) : (start - end);
    array = ft_rrange(start, end);
    i = 0;
    while (lent-- >= 0)		// lent = 4, но у нас 5 элементов, поэтому делаем не только > но и = 0
        printf("Значение  %d\n", array[i++]);
    return (0);
}
