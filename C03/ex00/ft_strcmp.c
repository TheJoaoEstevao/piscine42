/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:59:33 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/21 17:10:26 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	printf("%d", ft_strcmp("Test", "Test1"));
	printf("\n%d", ft_strcmp("Test", "Te"));
	printf("\n%d", ft_strcmp("Te", "Test"));
	printf("\n%d", ft_strcmp("Test", "Test"));
}*/