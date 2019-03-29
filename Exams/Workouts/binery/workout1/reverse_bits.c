/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:20:27 by ititkov           #+#    #+#             */
/*   Updated: 2019/01/18 15:43:29 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "print_bits.c"

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char 	r;
	int				i;

	r = 0;
	i = 0;

	while (i < 8)
	{
		r <<= 1;
		r = ((octet & 1) | r);
		octet >>= 1;
		i++;
	}
	return (r);
}
int		main(void)
{
	unsigned char	octet;

	octet = 5;
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(reverse_bits(octet));
	return (0);
}







/*	7 6 5 4 3 2 1 0
	0 0 0 0 0 0 0 0 	= 0
	0 0 0 0 0 1 0 1 	= 5
*/
