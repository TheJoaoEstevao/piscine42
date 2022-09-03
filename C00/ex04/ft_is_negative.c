/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevao <jestevao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:57:30 by jestevao          #+#    #+#             */
/*   Updated: 2022/08/19 23:35:40 by jestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (NULL || n >= 0)
	{
		write (1, "P", 1);
	}
	else if (n < 0)
	{
		write (1, "N", 1);
	}
}
/*int	main(void)
{
	ft_is_negative('0');
	return (0);
}
*/