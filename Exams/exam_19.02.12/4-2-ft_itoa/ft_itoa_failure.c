/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:29:03 by exam              #+#    #+#             */
/*   Updated: 2019/02/13 20:38:31 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// Нет проверки на минимум

int				ft_nbrlen(int nbr)
{
	int			i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 10)
	{
		nbr = nbr / 10;
		i++;
	}
	i += 2;
	return (i);
}

char			*ft_itoa(int nbr)
{
	char		*str;
	int			i;
	int			lent;

	i = 0;	
	lent = 0;
	lent = ft_nbrlen(nbr);
	str = (char *)malloc(sizeof(char) * lent);
	lent--;
	if (nbr == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (nbr < 0)
	{
		str[i++] = '-';
		nbr *= -1;
	}
	str[lent--] = '\0';
	while (i <= lent)
	{
		if (nbr < 10)
			str[lent--] = nbr + 48;
		else
		{
			str[lent--] = nbr % 10 + 48;
			nbr = nbr / 10;
		}
	}
	return (str);
}

int			main(int argc, char **argv)
{
	char	*array;

	if (argc == 2)
	{
		array = ft_itoa(atoi(argv[1]));
		printf("array = %s\n", array);
	}
	return (0);
}


