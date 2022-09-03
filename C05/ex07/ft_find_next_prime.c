/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:36:16 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/23 16:48:20 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;

	num = nb;
	while (num < 2147483647 && !ft_is_prime(num))
		num++;
	return (num);
}
/*int	main(void)
{
  int i = 1;
  while (i < 21)
	{
	printf("%d ",i);
	printf("%d\n",ft_is_prime(i));
	i++;
	}
	printf("%d\n",ft_is_prime(3));
	ft_is_prime(99);
  
  printf("%d", ft_find_next_prime(1101));
  
  return(0);
}*/