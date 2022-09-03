/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:25:13 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:45:03 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int		main(void)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
	char empty[] = "";
	printf("-----\n1 = String contains only lowercase 
	chars\n0 = String doesn't contain only lowercase chars\n\n");
	printf("%s = %d\n", uppercase, ft_str_is_uppercase(uppercase));
	printf("%s = %d\n", special, ft_str_is_uppercase(special));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(empty));
	return (0);
}*/