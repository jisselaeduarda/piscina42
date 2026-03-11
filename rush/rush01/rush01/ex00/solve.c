/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 21:06:33 by guilhmar          #+#    #+#             */
/*   Updated: 2026/03/08 22:21:30 by guilhmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	row_unique(int *matrix, int n, int row)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (matrix[row * n + i] != 0
				&& matrix[row * n + i] == matrix[row * n + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	col_unique(int *matrix, int n, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (matrix[i * n + col] != 0
				&& matrix[i * n + col] == matrix[j * n + col])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	solve(int *matrix, int n, int *rules, int pos)
{
	int	row;
	int	col;
	int	num;

	num = 1;
	row = pos / n;
	col = pos % n;
	if (pos == n * n)
		return (1);
	while (num <= n)
	{
		matrix[row * n + col] = num;
		if (row_unique(matrix, n, row) && col_unique(matrix, n, col))
		{
			if (solve(matrix, n, rules, pos + 1))
				return (1);
		}
		num++;
	}
	matrix[row * n + col] = 0;
	return (0);
}

void	ft_sky_scrapper(int *matrix, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(matrix[i * n + j] + '0');
			if (j < n - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
