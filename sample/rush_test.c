/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwolee <kwolee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:52:58 by kwolee            #+#    #+#             */
/*   Updated: 2021/10/09 09:52:58 by kwolee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void print_char(int x, int y, int x_index, int y_index)
{
    if (y_index == 1)
    {
        if (x_index == 1)
            ft_putchar('A');
        else if (x_index > 1 && x_index < x)
            ft_putchar('B');
        else if (x_index == x)
            ft_putchar('C');
    }
    if (y_index > 1 && y_index < y)
    {
        if (x_index == 1)
            ft_putchar('B');
        else if (x_index > 1 && x_index < x)
            ft_putchar(' ');
        else if (x_index == x)
            ft_putchar('B');
    }
    if (y_index == y)
    {
        if (x_index == 1)
            ft_putchar('C');
        else if (x_index > 1 && x_index < x)
            ft_putchar('B');
        else if (x_index == x)
            ft_putchar('A');
    }
}

void rush(int x, int y)
{
    int x_index;
    int y_index;
    y_index = 1;
    while (y_index <= y)
    {
        x_index = 1;
        while (x_index <= x)
        {
            print_char(x, y, x_index, y_index);
            x_index++;
        }
        ft_putchar('\n');
        y_index++;
    }
}