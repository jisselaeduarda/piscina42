/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeduarda <jeduarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 23:26:00 by jeduarda          #+#    #+#             */
/*   Updated: 2026/03/11 03:22:59 by jeduarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }