/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 10:36:34 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/13 12:48:35 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				ft_count_words(char *str)
{
	int			i;

	i = 1;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			i++;
		str++;
	}
	return (i);
}

int				*ft_find_words(char *str, int am)
{
	int			*stack;
	int			prev;
	int			i;
	int			j;

	i = 0;
	j = 0;
	
	stack = (int *)malloc(sizeof(int) * am);

	if (!str)
		return (NULL);
	stack[j++] = i++;
	while (str[i])
	{
		prev = str[i++];
		if ((prev == ' ' || prev == '\t') && str[i] != ' ' && str[i] != '\t')
			stack[j++] = str[i];
	}
	return (stack);
}

void			ft_print_words(char *str, int *stack)
{
	int			i;
	int			j;

	i = 0;
	j = stack[0] - 1;
	while (stack[j] >= 0)
	{
		i = stack[j--];
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			ft_putchar(str[i++]);
	}
	ft_putchar('\n');
}

int				main(int argc, char **argv)
{
	int			*stack;
	int			am;

	stack = NULL;
	am = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		am = ft_count_words(argv[1]);
		stack = ft_find_words(argv[1], am);
		ft_print_words(argv[1], stack);
	}
	return (0);
}

