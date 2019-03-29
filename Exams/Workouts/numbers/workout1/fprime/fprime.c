/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:24:28 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/22 20:24:40 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			main(int argc, char **argv)
{	
	int		n = 0;
	int		dvd = 0;
	int		flag = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n < 0)
			;
		if (n == 1)
			printf("1\n");
		dvd = 2;
		while (dvd <= n)
		{
			if (n % dvd == 0)
			{
				if (flag == 0)
				{
					printf("%d", dvd);
					flag++;
					n = n / dvd;
				}
				else
				{
					printf("*%d", dvd);
					n = n / dvd;
				}	
			}
			else
				dvd++;
		}	
		return (0);
	}
	printf("\n");
	return (0);
}

