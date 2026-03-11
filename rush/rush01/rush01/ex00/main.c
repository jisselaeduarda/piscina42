/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:03:24 by guilhmar          #+#    #+#             */
/*   Updated: 2026/03/08 21:58:06 by guilhmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_sky_scrapper(int *matrix, int n);
int		ft_count_numbers(char *str);
int		ft_get_argv(char *argv, int *rules, int size);
int		ft_sqrt(int n);
int		solve(int *matrix, int n, int *rules, int pos);

int	setup(int *rules, int str_rules)
{
	int	*matrix;
	int	base;
	int	i;

	base = ft_sqrt(str_rules);
	matrix = malloc(sizeof(int) * base * base);
	if (!matrix)
	{
		free(rules);
		return (1);
	}
	i = 0;
	while (i < base * base)
		matrix[i++] = 0;
	if (!solve(matrix, base, rules, 0))
	{
		free(matrix);
		free(rules);
		return (1);
	}
	ft_sky_scrapper(matrix, base);
	free(matrix);
	free(rules);
	return (1);
}

/*
 * main
 *
 * Parse argv to array rules and call the solver
 *
 * @param[void]
 * @return[int]: exit code 0 success, 1 error
 */
int	main(int argc, char **argv)
{
	int	*rules;
	int	str_rules;

	if (argc != 2)
		return (1);
	str_rules = ft_count_numbers(argv[1]);
	if (str_rules != 16)
		return (1);
	rules = malloc(4 * str_rules);
	if (!rules)
		return (1);
	if (ft_get_argv(argv[1], rules, str_rules))
	{
		free(rules);
		return (1);
	}
	setup(rules, str_rules);
	return (0);
}
