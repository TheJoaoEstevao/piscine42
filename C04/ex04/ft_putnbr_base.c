/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:50:59 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/23 15:16:53 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int) size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_ver_bas(char *base)
{
	int	i;
	int	b;

	i = 0;
	while (base[i] != '\0')
	{
		b = i + 1;
		while (base[b])
		{
			if (base[i] == base[b])
				return (0);
			b ++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	s;

	s = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
/*int	main(void)
{
	char	base[] = "Helo Sir!";
	unsigned long		c;

	c = 0;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c ++;
	}
	c = 0;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c ++;
	}
	printf("\n");
	ft_putnbr_base(-1, base);
	printf("	\n");
}*/