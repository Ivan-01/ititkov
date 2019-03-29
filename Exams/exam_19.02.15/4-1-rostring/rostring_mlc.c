/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring_mlc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:42:19 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/15 17:02:30 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#define BUFF_SIZE 4864

int				main(int argc, char **argv)
{
	char		*str;
	char		*word;
	char		*begin;
	int			flag = 0;

	word = NULL;
	if (argc > 1)
	{
		str = argv[1];
		word = (char *)malloc(sizeof(char) * BUFF_SIZE);
		if (!word)
			return 0;
		begin = word;
		while (*str)
		{
			while (*str && (*str == ' ' || *str == '\t'))
				str++;
			while(*str && *str != ' ' && *str != '\t')
				*word++ = *str++;
				*word++ = '\0';
				flag = 1;
			}
			else
			{
				while 

		}
				
			

			else (*str && *str != ' ' && *str != '\t' && flag == 1)
				while *str


 
		
		
		
		
		
		
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		while (*str && *str != ' ' && *str != '\t')
		{
			*word++ = *str++;
			free(++word);
		}
		*word++ = '\0';
		while (*str)
		{
			while ((*str == ' ' || *str == '\t') && *str)
				str++;
			while ((*str != ' ' || *str != '\t') && *str)
				write(1, str++, 1);
			write(1, " ", 1);
		}
		while (*begin)
			write(1, begin++, 1);
	}
	write(1, "\n", 1);
	return (0);
}


