/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:41:34 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/22 20:18:02 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str [c])
	{
		c++;
	}
	return (c);
}
/*int main()
{
	char str[] = "Life is good.";
	int result = ft_strlen(str);
	printf("The length of the string is %d.\n", result);
	return 0;
}*/