/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 20:09:21 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/04 20:33:12 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>			// Удалить перед сдачей

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	printf("lent = %d\n", i);
	return (i);
}

char		*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

char		*ft_strdup(char *src)
{
	char	*s1;
	int		len;
	int		i;

	s1 = NULL;
	len = ft_strlen(src);
	i = 0;
	s1 = (char *)malloc(sizeof(char) * len + 1);
	s1 = ft_strcpy(s1, src);
	return (s1);
}

int			main(int argc, char **argv)
{
	char	*strdup;

	strdup = NULL;
	if (argc == 2)
	{
		strdup = ft_strdup(argv[1]);
		printf ("argv[1] = %s, strdup = %s", argv[1], strdup);
	}
	printf("\n");
	return (0);
}

