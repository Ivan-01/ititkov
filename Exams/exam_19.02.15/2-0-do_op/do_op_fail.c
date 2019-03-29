/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:26:13 by exam              #+#    #+#             */
/*   Updated: 2019/02/16 11:50:30 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			ft_do_op(int a, char op, int b)
{
	int		res;

	res = 0;
	if (op == '+')
		res = a + b;
	else if (op == '-')
		res = a - b;
	else if (op == '*')
		res = a * b;
	else if (op == '/')
		res = a / b;
	else if (op == '%')			// Не сделал операцию остатка от деления.
		res = a % b;	
	return (res);
}

int			main(int argc, char **argv)
{
	int		a = 0;
	int		b = 0;
	char	op;
	int		res = 0;


	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = *argv[2];
		res = ft_do_op(a, op, b);
		printf("%d", res);
	}
	printf("\n");
	return (0);
}

