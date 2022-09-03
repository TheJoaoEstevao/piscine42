/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:16:10 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:44:58 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char special[] = "abcdefghijklmnopqrstuvwxyz_";
	char empty[] = "";
	printf("-----\n1 = String contains only lowercase 
	chars\n0 = String doesn't contain only lowercase chars\n\n");
	printf("%s = %d\n", lowercase, ft_str_is_lowercase(lowercase));
	printf("%s = %d\n", special, ft_str_is_lowercase(special));
	printf("Empty = %d\n-----\n", ft_str_is_lowercase(empty));
	return (0);
}*/