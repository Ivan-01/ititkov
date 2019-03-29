/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:29:12 by ititkov           #+#    #+#             */
/*   Updated: 2019/03/13 15:48:06 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>


int				main(void)
{
/*
	int			nbr = 12;
	int			unbr = -1;
	int			octet = 16;
*/
	float		fl1 = 12345678.12345;
	float		fl2 = 0.123456789;
	float		fl3 = 12345678912.87654321;

/*
	ft_printf("ft_printf c = %c\n", 'A');
	printf("printf c = %c\n", 'A');
	printf("\n");
	
	ft_printf("ft_printf d = %d\n", nbr);
	printf("printf d = %d\n", nbr);
	printf("\n");

	ft_printf("ft_printf o = %o\n", octet);
	printf("printf o = %o\n", octet);
	printf("\n");

	ft_printf("ft_printf p = %p\n", &nbr);
	printf("printf p = %p\n", &nbr);
	printf("\n");
	
	ft_printf("ft_printf s = %s\n", "Hello World");
	printf("printf s = %s\n", "Hello World");
	printf("\n");

	ft_printf("ft_printf u = %u\n", unbr);
	printf("printf u = %u\n", unbr);
	printf("\n");

	ft_printf("ft_printf x = %x\n", nbr);
	printf("printf x = %x\n", nbr);
	printf("\n");
	
	ft_printf("ft_printf X = %X\n", nbr);
	printf("printf X = %X\n", nbr);
	printf("\n");
		
	ft_printf("ft_printf = %%\n");
	printf("printf = %%\n");
	printf("\n");

*/
	printf("printf fl1 = % .2f\n", fl1);
	ft_printf("ft_printf fl1 = % .2f\n", fl1);
	printf("printf fl2 = % .2f\n", fl2);
	ft_printf("ft_printf fl2 = % .2f\n", fl2);
	printf("printf fl3 = % .2f\n", fl3);
	ft_printf("ft_printf fl3 = % .2f\n", fl3);

	return (0);
}

