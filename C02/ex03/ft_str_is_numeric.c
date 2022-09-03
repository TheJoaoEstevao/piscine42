/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:54:11 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:44:53 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char numeric[] = "0123456789";	
	char special[] = "0123456789_";
	char empty[] = "";
	printf("-----\n1 = String contains only 
	numerical chars\n0 = String doesn't contain only numerical chars\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(numeric));
	printf("%s = %d\n", special, ft_str_is_numeric(special));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(empty));
	return (0);
}*/