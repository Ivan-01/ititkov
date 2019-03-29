/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 10:33:06 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/18 15:43:33 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_bits.c"

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char	r;
	int				i;

	r = 0;
	i = 8;
	while (i--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
		print_bits(r);
		write(1, "\n", 1);
	}
	return (r);
}

int		main(void)
{
	unsigned char	octet;
	
	octet = 5;
	print_bits(octet);
	write(1, "\n", 1);
	reverse_bits(octet);
	return (0);
}
