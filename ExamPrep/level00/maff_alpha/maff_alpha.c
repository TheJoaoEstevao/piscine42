/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:38:33 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/19 11:39:08 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char even;
	char odd;

	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		even += 2;
		odd += 2;
	}
	write(1, "\n", 1);
	return (0);
}
