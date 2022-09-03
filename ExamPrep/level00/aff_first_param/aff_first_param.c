/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:35:31 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/19 11:35:39 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac > 1)
		while (av[1][++i])
			write(1, &av[1][i], 1);
	write(1, "\n", 1);
	return (0);
}