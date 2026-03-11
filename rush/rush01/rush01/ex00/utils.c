/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:04:31 by guilhmar          #+#    #+#             */
/*   Updated: 2026/03/08 22:01:08 by guilhmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_count_numbers(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
			count++;
		str++;
	}
	return (count);
}

int	ft_get_argv(char *argv, int *rules, int size)
{
	int	i;

	i = 0;
	while (*argv && i < size)
	{
		if (*argv == ' ')
		{
			argv++;
			continue ;
		}
		if (*argv >= '1' && *argv <= '4')
		{
			rules[i++] = *argv - '0';
		}
		else
			return (1);
		argv++;
	}
	if (i != size)
		return (1);
	return (0);
}
