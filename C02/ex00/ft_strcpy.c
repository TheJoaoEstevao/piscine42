/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:30:11 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:38:48 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*printf("%s\n", dest);
-> Place inside char *ft_strcpy

	int	main(void)
{
	char	src[90] = "hello world";
	char	dest[90];

	ft_strcpy(dest, src);
	return (0);
}*/