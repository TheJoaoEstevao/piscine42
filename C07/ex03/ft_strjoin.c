/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:21:26 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/23 21:43:23 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*f;

	f = malloc(sizeof(strs));
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			f[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && (i < (size - 1)))
			f[k++] = sep[j++];
	}
	f[k] = '\0';
	return (f);
}
/*int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int		size;

	size =  3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 15 + 1);
	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "What a Beautiful Day";
	sep = " .|. ";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
}*/