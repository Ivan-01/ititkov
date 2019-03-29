/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 08:53:10 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/14 10:31:57 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "print_bits.c"
# include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	unsigned char		octet;

	octet = 5;
	write(1, "octet = 5   ", 10);
	print_bits(octet);
	write(1,"\nafter swap = ", 14);
	print_bits(swap_bits(octet));
	return (0);
}
