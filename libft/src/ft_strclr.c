/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshaquan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 21:03:48 by bshaquan          #+#    #+#             */
/*   Updated: 2019/11/21 21:03:51 by bshaquan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int count;

	count = 0;
	if (!s)
		return ;
	while (s[count] != '\0')
	{
		s[count] = '\0';
		count++;
	}
}
