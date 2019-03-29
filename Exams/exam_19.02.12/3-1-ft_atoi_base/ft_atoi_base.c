/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:27:04 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 11:18:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_check_base(char c, int str_base)
{	
	char		base [16] = "0123456789abcdef";
	int			i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	while (i < str_base)
	{
		if (c == base[i])
			return (i);
		else
			i++;
	}
	return (-1);
}

int				ft_atoi_base(const char *str, int str_base)
{
	int			nbr;
	int			sign;
	int			i;

	nbr = 0;
	sign = 1;
	i = 0;
	if (!str)
		return (0);
	if (str_base < 2 || str_base > 16)
		return (0);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (ft_check_base (str[i], str_base) < 0)
			break;
		else
			nbr = nbr * str_base + ft_check_base(str[i], str_base);
		i++;
	}
	return (sign * nbr);
}
