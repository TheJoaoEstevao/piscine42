/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:23:51 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/16 14:44:31 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	count;

	count = 0;
	while (count < (size / 2))
	{
		first = *(tab + count);
		last = *(tab + size - count - 1);
		*(tab + count) = last;
		*(tab + size - count - 1) = first;
		count++;
	}
	return ;
}

/*int	main(void)
{
	int	i = 0;

	int tab[8] = {12555678};
	
	ft_rev_int_tab (tab, 8);
	while (i < 8)
	{	
		printf("%d", tab[i]);
		i++;
	}	
}*/
