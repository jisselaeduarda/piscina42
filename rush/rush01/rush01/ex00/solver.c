/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:24:45 by guilhmar          #+#    #+#             */
/*   Updated: 2026/03/08 22:24:47 by guilhmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_line(int *line, int n, int expected);
int	check_top(int *matrix, int *rules, int n, int col);
int	check_bottom(int *matrix, int *rules, int n, int col);
int	check_left(int *matrix, int *rules, int n, int row);
int	check_right(int *matrix, int *rules, int n, int row);
int	check_visibility(int *matrix, int *rules, int n);

int	check_visibility(int *matrix, int *rules, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (!check_top(matrix, rules, n, i))
			return (0);
		if (!check_bottom(matrix, rules, n, i))
			return (0);
		if (!check_left(matrix, rules, n, i))
			return (0);
		if (!check_right(matrix, rules, n, i))
			return (0);
		i++;
	}
	return (1);
}
