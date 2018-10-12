/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:34:24 by caroua            #+#    #+#             */
/*   Updated: 2017/11/19 17:02:30 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((unsigned char)*s1 == (unsigned char)*s2 && n)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (((unsigned char)*--s1 - (unsigned char)*--s2));
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
