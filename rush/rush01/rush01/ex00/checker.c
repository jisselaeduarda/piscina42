/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:21:47 by guilhmar          #+#    #+#             */
/*   Updated: 2026/03/08 22:22:50 by guilhmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(int *line, int n, int expected)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < n)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count == expected);
}

int	check_top(int *matrix, int *rules, int n, int col)
{
	int	j;
	int	line[4];

	j = 0;
	while (j < n)
	{
		line[j] = matrix[j * n + col];
		j++;
	}
	if (!check_line(line, n, rules[col]))
		return (0);
	return (1);
}

int	check_bottom(int *matrix, int *rules, int n, int col)
{
	int	j;
	int	line[4];

	j = 0;
	while (j < n)
	{
		line[j] = matrix[(n - 1 - j) * n + col];
		j++;
	}
	if (!check_line(line, n, rules[n + col]))
		return (0);
	return (1);
}

int	check_left(int *matrix, int *rules, int n, int row)
{
	int	j;
	int	line[4];

	j = 0;
	while (j < n)
	{
		line[j] = matrix[row * n + j];
		j++;
	}
	if (!check_line(line, n, rules[2 * n + row]))
		return (0);
	return (1);
}

int	check_right(int *matrix, int *rules, int n, int row)
{
	int	j;
	int	line[4];

	j = 0;
	while (j < n)
	{
		line[j] = matrix[row * n + (n - 1 - j)];
		j++;
	}
	if (!check_line(line, n, rules[3 * n + row]))
		return (0);
	return (1);
}
