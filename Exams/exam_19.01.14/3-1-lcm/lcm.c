/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 10:25:27 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 12:44:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	ft_find_hcf(unsigned int big, unsigned int small)
{
	unsigned int	hcf;
	unsigned int	dv;

	dv = small;
	
	while (dv > 0)
	{
		if (big % dv == 0 && small % dv == 0)
			return (dv);
		else
			dv--;
	}
	return (0);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	hcf;
	unsigned int	lcm;

	if (!a || !b)
		lcm = 0;
	if (a == b)
		hcf = a;
	else if (a > b)
		hcf = ft_find_hcf(a, b);
	else
		hcf = ft_find_hcf(b, a);
	lcm = a * b / hcf;
	return (lcm);
}

