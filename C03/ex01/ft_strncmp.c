/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:00:54 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/21 17:11:59 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	diff = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && !diff)
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == '\0' || s2[i] == '\0'))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
/*int	main(void)
{
	printf("%d", ft_strncmp("Test0", "Test1", 5));
	printf("\n%d", ft_strncmp("Tes4", "Tes5", 4));
	printf("\n%d", ft_strncmp("Te", "Test", 4));
	printf("\n%d", ft_strncmp("Test", "Test", 4));
}*/