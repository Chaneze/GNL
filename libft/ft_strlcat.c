/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:32:53 by caroua            #+#    #+#             */
/*   Updated: 2017/11/19 16:47:02 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tmpdst;
	const char	*tmpsrc;
	size_t		n;
	size_t		dstlen;

	tmpdst = dst;
	tmpsrc = src;
	n = size;
	while (*tmpdst != '\0' && n-- != 0)
		tmpdst++;
	dstlen = tmpdst - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(src));
	while (*tmpsrc != '\0')
	{
		if (n != 1)
		{
			*tmpdst++ = *tmpsrc;
			n--;
		}
		tmpsrc++;
	}
	*tmpdst = '\0';
	return (dstlen + (tmpsrc - src));
}
