/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_anatomy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 08:35:06 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/28 15:01:23 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    		*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *d;
    char    *s;

    i = 0;
    d = (char *)dst;
    s = (char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

void				ft_print_bits(unsigned int  octet, size_t n)
{
	int				r = 2147483647;
	int				i = 0;

	while (i < n)
	{
		r >>= 1;
		((octet & r) > 0) ? (printf("1")) : (printf("0"));
		i++;
	}
	printf("\n");
}

int					main(void)
{	
	float			nb_p = 123.456;
	float			nb_n = -321.654;
	char			sign = 0;
	char			exp = 0;
	int				i = 0;

	ft_print_bits(sign, 32);
	while (i < 4)
	{
		sign = (char)ft_memcpy(&sign, &nb_p + i, 1);//Перескакиввает через 4 байта
		printf("address = %p\n", (&nb_p + i));
		printf("byte %d   ", i);
		ft_print_bits(sign, 32);
		i++;
	}
	ft_print_bits(nb_p, 32);			
	ft_print_bits(nb_n, 32);
} 











