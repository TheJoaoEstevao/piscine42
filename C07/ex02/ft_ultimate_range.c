/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:30:34 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/24 13:19:39 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	i;
	int	*sp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	count = max - min;
	sp = (int *)malloc(sizeof(int) * count);
	if (!sp)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < count)
	{
		sp[i] = min;
		i++;
		min++;
	}
	*range = sp;
	return (count);
}
/*int	main(void)
{
	int	*tab;

	ft_ultimate_range(&tab, 1, 9);
}*/