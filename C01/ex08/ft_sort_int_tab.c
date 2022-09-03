/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:32:41 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/10 18:17:09 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *cpl, int *lrc)
{
	int	a;

	a = *cpl;
	*cpl = *lrc;
	*lrc = a;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
	j = 0;
		while (j < size - i -1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[8] = {6, 7, 8, 3, 1, 2, 4, 5,};
	ft_sort_int_tab (&tab[0], 8);
	int i = 0;
	while (i < 8)
	{
		printf("%d",tab[i]);
		i++;
	}	
}*/
