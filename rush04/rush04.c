/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhwang <dhwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:00:18 by dhwang            #+#    #+#             */
/*   Updated: 2021/10/11 15:10:25 by dhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c);

void	set_line(int width, char left, char center, char right)
{
	int	i;

	i = 1;
	while (i <= width)
	{
		if (i == 1)
			ft_putchar(left);
		else if (i <= (width - 1))
			ft_putchar(center);
		else if (i == width)
			ft_putchar(right);
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
			set_line(x, 'A', 'B', 'C');
		else if (i <= (y - 1))
			set_line(x, 'B', ' ', 'B');
		else if (i == y)
			set_line(x, 'C', 'B', 'A');
		ft_putchar('\n');
		i++;
	}
}
