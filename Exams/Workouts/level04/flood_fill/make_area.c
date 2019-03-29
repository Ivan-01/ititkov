/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_area.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 11:11:08 by ititkov           #+#    #+#             */
/*   Updated: 2019/02/08 11:51:55 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			**make_area(char **zone, t_point size)
{
	int			x;
	int			y;
	int			i;
	int			j;
	char		**area;

	x = size.x;
	y = size.y;
	i = 0;
	j = 0;
	area = NULL;
	if (!zone)										// Если указатель не битый
		return (NULL);
	if (x < 1 || y < 1)							// Если размерность не нулевая
		return (0);
	area = (char **)malloc(sizeof(char *) * (y + 1)); // Внимание! (sizeof(char *)
	if (!area)
		return (NULL);
	area[y] = NULL;								// Стоп сигнал по вертикали NULL
	while (i < y)
	{
		area[i] = (char *) malloc(sizeof(char) * (x + 1));
		if (!area[i])
			return (NULL);
		area[i][x] = '\0';
		while (j < x)
		{
			area[i][j] = zone[i][j];
			j++;
		}
	i++;
	}
	return (area)
}
