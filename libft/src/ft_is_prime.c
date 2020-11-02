/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshaquan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:06:08 by bshaquan          #+#    #+#             */
/*   Updated: 2019/11/21 19:06:12 by bshaquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_prime(int nb)
{
	int a;

	a = 3;
	while ((!nb % 2 && nb != 2) || nb <= 1)
		return (0);
	while (a * a < nb)
	{
		if (nb % a == 0)
			return (0);
		a += 2;
	}
	return (1);
}