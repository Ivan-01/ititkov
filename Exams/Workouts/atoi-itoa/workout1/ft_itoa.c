/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 10:42:14 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/03 12:40:40 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_numlent(int n)
{
	int		lent;

	lent = 0;

	if (n < 0)
	{
		n = n * (-1);
		lent++;
	}
	while (n > 10)
	{
		n = n / 10;
		lent++;
	}
	lent += 2;				// одна позиция для '\0'
	return (lent);
}	

char	*ft_itoa(int nbr)
{
	char		*str;
	int			lent;
	int			i;

	str = NULL;
	lent = ft_numlent(nbr);
	i = 0;
	str = (char *)malloc(sizeof(char) * lent);
	lent--;
	if (!str)									// Проверка успешности аллоцирования памяит
		return (NULL);
	if (nbr > 2147483647 || nbr < -2147483648)	//Проверка аргумента на валидность
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
		i++;									// Ставим минус в позицию str[0]
	}
	str[lent--] = '\0';							// Идём с конца, первым ставим знак конца строки
	while (i <= lent)
	{
		if (nbr > 10)
		{
			str[lent--] = nbr % 10  + '0';
			nbr = nbr / 10;
		}
		else
			str[lent--] = nbr + '0';
	}
	return (str);
}

int			main(int argc, char **argv)
{
	int		nbr;
	char	*str;

	nbr = 0;
	str = NULL;
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		printf("Integer = %d\n", nbr);
		str = ft_itoa(nbr);
		printf("Character string = %s\n", str);
	}
	else
		printf("\n");
	return (0);
}

