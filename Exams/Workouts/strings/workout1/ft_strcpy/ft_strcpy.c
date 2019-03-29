/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:49:07 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/04 20:06:49 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>   // Удалить перед сдачей

char		*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int		main(int argc, char **argv)
{
	char	*dst;
	char	*src;
	char	*result;

	if (argc == 3)
	{
		dst = argv[1];
		src = argv[2];
		printf("dst = %s, src = %s\n", dst, src);
		result = ft_strcpy(dst, src);
		printf("dst = %s, src = %s\n", result, src);
	}
	printf("\n");
	return (0);
}

