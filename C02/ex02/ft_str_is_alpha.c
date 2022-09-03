/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:10:37 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:44:48 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'
				&& str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWX
YZabcdefghijklmnopqrstuvwxyz";	
	char specialchrc[] = "ABC abc áéíóú àèìòù 
	âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char empty[] = "";	
	printf("-----\n1 = String contains only 
	alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", alphabet, ft_str_is_alpha(alphabet));
	printf("%s = %d\n", specialchrc, ft_str_is_alpha(specialchrc));
	printf("Empty = %d\n-----\n", ft_str_is_alpha(empty));
	return (0);
}*/