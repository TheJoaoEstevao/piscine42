/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:48:08 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:45:21 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*int		main(void)
{
	char lowercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char allcases[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";	
	char empty[] = "";
	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strlowcase(lowercase));
	printf("%s\n", ft_strlowcase(allcases));
	printf("Empty = %s\n-----\n", ft_strlowcase(empty));
}*/