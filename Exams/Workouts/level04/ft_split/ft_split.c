/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:00:55 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/09 17:13:04 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int				ft_check_space(char c)
{
	return (((c >= 9 && c <= 13) || c == 32) ? 1 : 0);
}

int				ft_words_count(char *str)
{
	int			amm;

	amm = 0;
	while (*str)
	{
		if (ft_check_space(*str) == 1)
			str++;
		else
		{
			amm++;
			while (*str && ft_check_space(*str) == 0)
				str++;
		}
	}
	return (amm);
}

int			ft_word_lent(char *str, int i)
{
	int		lent = 0;

	while (str[i] && !ft_check_space(str[i]))
	{
		lent++;
		i++;
	}
	return (lent);
}

char			**ft_split(char *str)
{
	int		amm;
	char	**tab;
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		lent = 0;

	amm = ft_words_count(str);												//
	if (!str)
		return (NULL);
	if (!amm)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (amm + 1))))
		return (NULL);
	while (str[i] && j < amm)
	{
		k = 0;
		while (ft_check_space(str[i]) == 1 && str[i])
			i++;
		lent = ft_word_lent(str, i);
		if (!(tab[j] = (char *)malloc(sizeof(char) * (lent + 1)))) 			//
			return (NULL);
		while (ft_check_space(str[i]) == 0 && str[i])
		{
			tab[j][k] = str[i];
			printf("tab[%d][%d] = %c\n", j, k, tab[j][k]);
			i++;
			k++;
		}	
		tab[j++][k] = '\0';
	}
	tab[j] = NULL;
	return (tab);
}

int				main(int argc, char **argv)
{
	char	**tab;
	int		amm = 0;
	int		i = 0;

	if (argc == 2)
	{
		amm = ft_words_count(argv[1]);
		printf("ammounts of words = %d\n", amm);
		tab = ft_split(argv[1]);
		if (!tab)
			printf("NULL\n");
		while (tab && tab[i])
			printf("%s\n", tab[i++]);
	}
	if (argc != 2)
		printf("\n");
	return (0);
}


