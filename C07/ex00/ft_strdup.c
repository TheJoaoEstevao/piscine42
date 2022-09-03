/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:20:53 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/24 16:29:08 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
char	*ft_strdup(char *src)
{
	int		i;
	char	*g;

	i = 0;
	while (src[i] != '\0')
		i++;
	g = (char *)malloc(sizeof(char) * i);
	if (!g)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		g[i] = src[i];
		i++;
	}
	g[i] = '\0';
	return (g);
}
/*int	main(void)
{
	char	c[] = "hello";
	char *d;
	printf("%s", ft_strdup(c));
	d = ft_strdup(c);
	free(d);
}*/