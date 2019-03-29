/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 20:35:05 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/04 20:46:25 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>		// Удалить перед сдачей! Только для проверки!

int			ft_strcmp(char *s1, char *s2)
{
	int			i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])//  Проблема, которая была в f_list_remove_if!
		i++;
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	int		result;

	result = 0;
	if (argc == 3)
	{
		result = ft_strcmp(argv[1], argv[2]);
		printf("str1 = %s, str2 = %s, result = %d", argv[1], argv[2], result);
	}
	printf("\n");
	return (0);
}

