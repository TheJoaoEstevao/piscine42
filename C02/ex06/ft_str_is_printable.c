/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:31:28 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/17 00:45:08 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char string[] = {33,34};
	char unprintable[] = "Unprintables: \t (tab), \a (?)";
	char empty[] = "";
	printf("-----\n1 = Contains only printable 
	characters\n0 = Contains unprintable characters\n\n");
	printf("%s %d\n", string, ft_str_is_printable(string));
	printf("%s = %d\n", unprintable, ft_str_is_printable(unprintable));
	printf("Empty = %d\n-----\n", ft_str_is_printable(empty));
	return(0);
}*/