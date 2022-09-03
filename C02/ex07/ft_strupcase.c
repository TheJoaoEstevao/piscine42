/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:36:58 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:45:14 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";	
	char empty[] = "";
	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strupcase(lowercase));
	printf("%s\n", ft_strupcase(allcases));
	printf("Empty = %s\n-----\n", ft_strupcase(empty));
}*/