/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 15:39:09 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/20 17:52:34 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>				// Удалить перед сдачей!

int				ft_check_sp(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int				ft_count_words(char *str)
{
	int			flag = 0;
	int			cnt = 0;

	while (*str)
	{
		if (!ft_check_sp(*str))
		{
			if (flag == 0)
			{
				cnt++;
				flag = 1;
				str++;
			}
			else
				str++;
		}
		else
		{
			flag = 0;
			str++;
		}
	}
	return (cnt);
}

char    		**ft_split(char *str)
{
	char		**mtx;
	char		*begin;
	int			cnt = 0;
	int			lent = 0;
	int			x = 0;
	int			y = 0;

	begin = NULL;
	cnt = ft_count_words(str);
	mtx = (char **)malloc(sizeof(char *) *  + 1);
	if (!mtx)
		return (0);
	while (*str)
	{
		if (ft_check_sp(*str))
			str++;
		else
		{
			begin = str;
			while (*str && !ft_check_sp(*str))
			{
				lent++;
				str++;
			}
		}
		printf("word's lent = %d\n", lent);
		lent = 0;
		mtx[y] = (char *)malloc(sizeof(char *) * lent + 1);
		while (*begin && !ft_check_sp(*begin))
		{
			printf("%c\n", *begin);
			mtx[y][x++] = *begin++;
		}
		mtx[y++][x] = '\0';
		x = 0;
	}
	mtx[y] = NULL;
	return (mtx);
}

// void			ft_print_matrix(char **mtx)


int				main(int argc, char **argv)
{
	char		*str;
	char		**mtx;

	if (argc == 2)
	{
		str = argv[1];
		printf("%d\n", ft_count_words(str));
		mtx = ft_split(str);
		printf("%s\n", mtx[0]);
		printf("%s\n", mtx[1]);
	}
	return (0);
}

