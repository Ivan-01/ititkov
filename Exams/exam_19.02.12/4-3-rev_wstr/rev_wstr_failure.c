/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:06:59 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 12:45:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	i = 0;

	while (str[i])
		i++;
	return (i);
}

void		ft_printword(char *str, int start)
{
	if (start == 0)
	while (str[start] != ' ' || str[++start] != '\t' || str[++start] != ' ')
	{
		if (start > 0)
		{
			ft_putchar (str[star]);
			ft_putchar (' ');
		}
		else
			ft_putchar (srt[start]);
}
	
int			main(int argc, char **argv)
{
	int		lent;
	int		flag;
	int		word;

	lent = 0;
	flag = 1;
	word = 0;
	if (argc == 2)
	{
		lent = ft_strlen(argv[1]);
		lent--;
		while (lent)
		{
			if (flag = 1 && (str[lent] != ' ' || str[lent] != '\tab'))
			{
				lent--;
				flag = 1;
			}
			else
			{
				ft_printword(str, lent + 1);
				lent--;
			}
			if (flag <= 0 && (str[lent] = ' ' || str[lent] = '\tab'))
			{
				lent--;
				flag = 0;
			}
			else if (flag = 1 && (str[lent] = ' ' || str[lent] = '\tab'))
	

					
			 





