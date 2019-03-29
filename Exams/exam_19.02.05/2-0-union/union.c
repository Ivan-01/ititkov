/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 09:35:54 by exam              #+#    #+#             */
/*   Updated: 2019/02/05 10:05:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(c)
{
	write (1, &c, 1);
}

int			ft_check_double(char *str, char c, int p)
{
	int		i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

void		ft_union(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (ft_check_double(str1, str1[i], i) == 0)
			ft_putchar(str1[i++]);
		else
			i++;
	}
	while (str2[j])
	{
		if ((ft_check_double(str1, str2[j], i) == 0) && \
			(ft_check_double(str2, str2[j], j) == 0))
			ft_putchar (str2[j++]);
		else
			j++;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
