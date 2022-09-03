/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamado-f <gamado-f@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:34:28 by gamado-f          #+#    #+#             */
/*   Updated: 2022/08/07 10:36:34 by gamado-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char c);

void	final(int x, int y)
{
	int	i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		i = 0;
		while (i < (x -2))
		{
			ft_putchar('B');
			++i;
		}
		if (x > 1)
			ft_putchar('C');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	middle(int x, int y)
{
	int	i;
	int	count;

	if (y > 1)
	{
		count = 0;
		while (count < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('B');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('B');
			++count;
		}
	}
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
		ft_putchar('A');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('B');
		++i;
	}
	if (x > 1 && y > 0)
		ft_putchar('A');
	middle(x, y);
	final(x, y);
}
