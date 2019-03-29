/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:53:58 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/11 15:58:28 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUFF_SIZE 4864
#include <stdio.h>

static int		ft_match_br(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

static int		ft_check_br(char *str)
{
	int			i;
	int			top;
	char		stack[BUFF_SIZE];

	i = 0;
	top = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			stack[top++] = str[i];
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (!ft_match_br(stack[--top], str[i]))
				return (0);
		}
		i++;
	}
	return (!top);
}

int				main(int argc, char **argv)
{
	int			i;

	i = 0;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (--argc)
		{
			if (ft_check_br(argv[++i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
	}
	return (0);
}

