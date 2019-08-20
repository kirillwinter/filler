/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:05:01 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:20:12 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция считает квадратный корень числа
*/

int	ft_sqrt(int nb)
{
	int i;
	int sqr;

	i = 1;
	sqr = 1;
	if (nb > 0)
	{
		while (sqr <= nb)
		{
			sqr = i * i;
			if (sqr == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
