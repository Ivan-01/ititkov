/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 09:53:17 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/16 10:52:35 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// Преобразование строки символов в число.

int		ft_put_number(char *s)
{
	int		n;
	int		sign;

	sign = 1;
	n = 0;
	while (*s && (*s == ' ' || *s == '\t'))  // Можно убрать, в atoi есть провпрка
		s++;
	if (*s == '-')		// Можно убрать для unsigned int
	{
		sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		n = n * 10 + *s++ - 48;
	return (n * sign);
}
		
int		main(void)
{
	char	str[] = "   -039475732& ";

	printf("str char is = %s\n", str);
	printf("number is = %d\n", ft_put_number(str));
	return (0);
}
