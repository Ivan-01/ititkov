/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:16:33 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/17 21:33:18 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUFF_SIZE 4864

int				ft_match_brackets(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

int				ft_check_brackets(char *str)
{
	int			i =  0;
	int			top = 0;
	char		stack[BUFF_SIZE];


	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			stack[top++] = str[i];
		if (str[i] == ')' || str[i] == ']'  || str[i] == '}')
		{
			if (!ft_match_brackets(stack[--top], str[i]))
				return (0);
		}
		i++;
	}
	return (!top);
}

int			main(int argc, char **argv)
{
	int			i = 0;

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (--argc)
		{
			if (ft_check_brackets(argv[++i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
	}
	return (0);
}




