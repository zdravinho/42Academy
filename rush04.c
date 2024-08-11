/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: savergar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:19:17 by savergar          #+#    #+#             */
/*   Updated: 2024/08/11 16:18:47 by savergar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_create_rows(char *row, int i, int y)
{
	if (i == 0)
	{
		row[0] = 'A';
		row[1] = 'B';
		row[2] = 'C';
	}
	else if (i > 0 && i < (y - 1))
	{
		row[0] = 'B';
		row[1] = ' ';
		row[2] = 'B';
	}
	else
	{
		row[0] = 'C';
		row[1] = 'B';
		row[2] = 'A';
	}
}

void	ft_print_rows(int j, int x, char *row)
{
	if (j == 0)
		ft_putchar(row[0]);
	else if (j == (x - 1))
		ft_putchar(row[2]);
	else
		ft_putchar(row[1]);
}

void	rush(int x, int y)
{
	char	row[3];
	int		i;
	int		j;

	i = 0;
	if (x <= 0 || y <= 0)
		write(1, "Valores no aceptados\n", 21);
	else
	{
		while (i < y)
		{
			ft_create_rows(row, i, y);
			j = 0;
			while (j < x)
			{
				ft_print_rows(j, x, row);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
