/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:05:26 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 18:59:09 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# define BUFF_SIZE 4864

int				ft_check_match(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}


int				ft_check_brackets(char *str)
{
	int			i = 0;
	int			top = 0;
	char		stack[BUFF_SIZE];

	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			stack[top++] = str[i];
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (!ft_check_match(stack[--top], str[i]))
				return (0);
		
		}
		i++;
	}
	return(!top);
}

int				main(int argc, char **argv)
{
	int			i = 1;

	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		while (i < argc)
		if (ft_check_brackets(argv[i++]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}

