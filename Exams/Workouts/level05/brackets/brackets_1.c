/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:30:19 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/14 08:49:35 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUFF_SIZE 4864

static int			ft_check_match(char a, char b)			//static
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

static int			ft_check_brackets(char *str)			//static
{
	int		i = 0;
	int		top = 0;
	int		stack[BUFF_SIZE];

	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			stack[top++] = str[i];
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (!ft_check_match(stack[--top], str[i])) 		// !
				return (0);
		}
		i++;												// i++;
	}
	return (!top);											// !top
}

int			main(int argc, char **argv)
{
	int		i;

	i =  0;
	if (argc == 1)
		write (1, "\n", 1);
	else
		while (--argc)
		{
			if (ft_check_brackets(argv[++i]))				//++i
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
		return (0);
}
				
