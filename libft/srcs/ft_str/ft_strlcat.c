/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:47:20 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/04 21:06:05 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat копирует из строки src в буфер dst не более чем size - 1
** символов и гарантированно устанавливает в конец строки нулевой символ
** таким образом, чтобы продолжить строку, на которую указывает dst. В случае,
** когда dst указывает на нуль-символ, поведение функций эквивалентно.
**
** Возвращает суммарную длину строк по адресам src и dst. Возвращаемое значение
** не зависит от того, удалось скопировать строку полностью или нет; это
** позволяет легко определить что буфер назначения слишком мал для копируемой
** строки.
*/

size_t	ft_strlcat(char *dst, const char *app, size_t size)
{
	char		*dstptr;
	const char	*appptr;
	size_t		n;
	size_t		dlen;

	dstptr = dst;
	appptr = app;
	n = size;
	while (n-- != 0 && *dstptr != '\0')
		dstptr++;
	dlen = dstptr - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen((char *)appptr));
	while (*appptr != '\0')
	{
		if (n != 1)
		{
			*dstptr++ = *appptr;
			n--;
		}
		appptr++;
	}
	*dstptr = '\0';
	return (dlen + (appptr - app));
}