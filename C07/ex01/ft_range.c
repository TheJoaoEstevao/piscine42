/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:30:17 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/24 15:46:47 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	i;
	int	*sp;

	if (min >= max)
	{
		return (0);
	}
	count = max - min;
	i = 0;
	sp = (int *)malloc(sizeof(int) * count);
	if (!sp)
		return (0);
	while (i < count)
	{
		sp[i] = min;
		i++;
		min++;
	}
	return (sp);
}
/*int	main(void)
{
	ft_range(1, 9);
}*/