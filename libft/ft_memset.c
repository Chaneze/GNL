/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:18:53 by caroua            #+#    #+#             */
/*   Updated: 2017/11/19 14:38:28 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char *tmp;

	tmp = s;
	while (len > 0)
	{
		*tmp++ = (unsigned char)c;
		len--;
	}
	return (s);
}
