/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeduarda <jeduarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 09:20:27 by jeduarda          #+#    #+#             */
/*   Updated: 2026/03/02 10:09:52 by jeduarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void print_char(int x_c, int y_c, int x, int y)
{
    if ((x_c ==1 && y_c== 1) || (x_c == 1 && y_c == y) ||
        (x_c== 1 && y_c == y)|| (x_c == x && y_c == 1))
    { 
            ft_putchar ('o'); 
    }

    else if (y_c == 1 || y_c == y)
    {
        ft_putchar('-');
    }
    else if (x_c == 1 || x_c == x){
        ft_putchar('|');
    }
    else {
       ft_putchar(' ');
        
    }
}

void    rush(int x, int y)
{
    int x_c; // esse é coluna
    int y_c; //essa é a linha
    
    if (x <= 0 || y <= 0)
    {
        write(1, "error", 5);
        return;
    }
    y_c = 1;
    while (y_c <= y)
    {
        x_c =1;
        while (x_c <= x)
        {
            print_char(x_c, y_c, x,y);  /* code */
            x_c++;
            
        }
        ft_putchar('\n');
        y_c++;
        
    }
}
