/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:27:20 by caroua            #+#    #+#             */
/*   Updated: 2017/11/19 17:19:32 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmpdst;
	const char	*tmpsrc;

	tmpdst = (char *)dst;
	tmpsrc = (const char *)src;
	while (n > 0)
	{
		*tmpdst++ = *tmpsrc++;
		n--;
	}
	return (dst);
}
