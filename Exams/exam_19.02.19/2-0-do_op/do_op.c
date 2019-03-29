/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 09:26:18 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 09:39:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int				ft_do_op(int x, char op, int y)
{
	int			res = 0;
	
	if (op == '+')
		res = x + y;
	if (op == '-')
		res = x - y;
	if (op == '*')
		res = x * y;
	if (op == '/')
		res = x / y;
	if (op == '%')
		res = x % y;
	return(res);
}



int				main(int argc, char **argv)
{
	int			x = 0;
	int			y = 0;
	int			res = 0;
	char		op;

	if (argc == 4)
	{
		x = atoi(argv[1]);
		op = *argv[2];
		y = atoi(argv[3]);
		res = ft_do_op(x, op, y);
		printf("%d", res);
	}
	printf("\n");
	return(0);
}

