/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:04:42 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/18 15:18:57 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // Только для проверки, удалить перед сдачей.
#include "print_bits.c" // Только для проверки, удалить перед сдачей.

unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}

int		main(void) 		// Только для проверки, удалить перед сдачей.
{
	unsigned char	octet;

	octet = 5;
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(swap_bits(octet));
	return (0);
}
