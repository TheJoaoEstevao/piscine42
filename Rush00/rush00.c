/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:33:34 by gamado-f          #+#    #+#             */
/*   Updated: 2022/08/07 15:21:12 by jestevao         ###   ########.fr       */
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
		ft_putchar('o');
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('-');
			++i;
		}
		if (x > 1)
			ft_putchar('o');
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
			ft_putchar('|');
			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (x > 1)
				ft_putchar('|');
			++count;
		}
	}
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
		ft_putchar('o');
	i = 0;
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('-');
		++i;
	}
	if (x > 1 && y > 0)
		ft_putchar('o');
	middle(x, y);
	final(x, y);
}
