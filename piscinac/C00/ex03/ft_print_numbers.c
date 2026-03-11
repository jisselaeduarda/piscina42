/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeduarda <jeduarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:57:55 by jeduarda          #+#    #+#             */
/*   Updated: 2026/03/09 11:21:33 by jeduarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_numbers(void)

{
	char	numbers_char;

		numbers_char = '0';
	while (numbers_char <= '9')
	{
		ft_putchar(numbers_char);
		numbers_char++;
	}
}

int	main(void)

{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
