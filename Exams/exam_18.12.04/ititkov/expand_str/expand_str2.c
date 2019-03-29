/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 12:09:12 by ititkov           #+#    #+#             */
/*   Updated: 2018/12/06 20:03:21 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str) //Функция определения длины строки
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_firstletter(char *str)  //Функция находит позицию первой буквы
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' | str[i] == '\t')
			i++;
		else
		{
			return (i);
			break;
		}
	}
	return (0);
}

int		ft_endletter(char *str)  //Функция находит позицию последней буквы
{
	int		i;

	i = ft_strlen(*str);
	while (i > 0)
	{
		if (str[i] == ' ' | str[i] == '\t')
			i--;
		else
		{
			return(i);
			break;
		}
	}
	return (0);
}}
