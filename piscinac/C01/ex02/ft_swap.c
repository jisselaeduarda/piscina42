/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeduarda <jeduarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:19:34 by jeduarda          #+#    #+#             */
/*   Updated: 2026/03/11 00:19:53 by jeduarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
//#include <stdio.h>
//
//int	main(void)
//
//{
//	int	n1 = 5, n2 = 10;

// 	printf("Antes: n1 = %d, n2 = %d\n", n1, n2);

// 	ft_swap(&n1, &n2);

// 	printf("Depois: n1 = %d, n2 = %d\n", n1, n2);

// 	return (0);

// }