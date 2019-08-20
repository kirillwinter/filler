/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:56:13 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 20:58:37 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Применяет функцию f к каждому символу строки, переданной в качестве
** аргумента, и передав ее индекс в качестве первого аргумента.
** Каждый символ передается по адресу f для изменения в случае необходимости
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (*s)
		{
			f(i++, s++);
		}
	}
}