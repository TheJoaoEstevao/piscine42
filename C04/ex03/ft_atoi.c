/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:21:19 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/22 20:18:59 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	s;
	int	b;
	int	i;

	s = 1;
	b = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		b = 10 * b + (str[i++] - '0');
	}
	return (b * s);
}
/*int	main(void)
{
	char	*s;

	s = " ---+--+1234ab567";
	printf("%d \n", ft_atoi(s));
	return (0);
}*/