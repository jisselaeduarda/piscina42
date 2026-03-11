/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariafer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:56:44 by mariafer          #+#    #+#             */
/*   Updated: 2026/02/28 10:56:47 by mariafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_handle_negative_numbers(int col, int row)
{
	if (col < 0 || row < 0)
		write(1, "Not allowed", 11);
}

void	ft_handle_rush_draw(int column, int row, int x, int y)
{
	if ((column == x && row == 1)
		|| (column == 1 && row == 1))
	{
		ft_putchar('A');
	}
	else if ((column == 1 && row == y)
		|| (column == x && row == y))
	{
		ft_putchar('C');
	}
	else if (row == 1 || column == 1 || column == x || row == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row_aux;
	int	column_aux;

	ft_handle_negative_numbers(x, y);
	row_aux = 1;
	while (row_aux <= y)
	{
		column_aux = 1;
		while (column_aux <= x)
		{
			ft_handle_rush_draw(column_aux, row_aux, x, y);
			column_aux++;
		}
		ft_putchar('\n');
		row_aux++;
	}
}
