/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:27:55 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/23 16:02:39 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
/*int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
}*/