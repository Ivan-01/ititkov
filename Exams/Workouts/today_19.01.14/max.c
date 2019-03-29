/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 11:31:26 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/14 12:04:09 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int		max;

	max = *tab;
	while (--len)
	{
		max = (*tab > max) ? (*tab) : (max);
		tab++;
		printf("*tab = %d\n", *tab);
	}	
	return (max);
}

int		main(void)
{
	int		tab[]= {1, -3, 8 , 2, 17, -6, 19, 0, 9, -18};

	printf("max = %d", max(tab, 10));
	return (0);
}
