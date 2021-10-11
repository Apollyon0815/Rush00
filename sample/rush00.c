/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisong <kisong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 02:31:12 by kisong            #+#    #+#             */
/*   Updated: 2021/10/09 11:48:51 by dhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	set_line(int width, char first_corner, char frame, char last_corner)
{
	int	i;

	i = 1;
	while(i <= width)
	{
		if (i == 1)
			ft_putchar(first_corner);
		else if (i <= (width -1))
			ft_putchar(frame);
		else if (i == width)
			ft_putchar(last_corner);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			set_line(x, 'o', '-', 'o');
		else if (i <= (y - 1))
			set_line(x, '|', ' ', '|');
		else if (i == y)
			set_line(x, 'o', '-', 'o');
		ft_putchar('\n');
		i++;
	}
}
