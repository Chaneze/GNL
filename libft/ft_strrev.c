/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:15:06 by caroua            #+#    #+#             */
/*   Updated: 2017/11/21 14:44:16 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrev(char *str)
{
	char *end;
	char *begin;
	char k;

	if (!str)
		return (NULL);
	end = str;
	begin = str;
	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		k = *end;
		*end = *begin;
		*begin = k;
		begin++;
		end--;
	}
	return (str);
}
