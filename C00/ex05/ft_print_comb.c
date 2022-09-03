/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:03:07 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/19 23:52:56 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char f, char s, char t)
{
	char	bl;

	write(1, &f, 1);
	write(1, &s, 1);
	write(1, &t, 1);
	bl = 10;
	if (f != '7' || s != '8' || t != '9' )
	{
		write(1, ", ", 2);
	}
	else
	{
		write(1, &bl, 1);
	}
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	s = '0';
	t = '0';
	while (f <= '9')
	{
		s = f + 1;
		while (s <= '9')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_write(f, s, t);
				t++;
			}
			s ++;
		}
		f++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/