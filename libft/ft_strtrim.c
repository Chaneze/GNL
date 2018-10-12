/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:12:01 by caroua            #+#    #+#             */
/*   Updated: 2017/11/20 11:00:45 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t beg;
	size_t end;

	beg = 0;
	if (!s)
	{
		return (NULL);
	}
	end = ft_strlen(s) - 1;
	while ((s[beg] == ' ' || s[beg] == '\t' || s[beg] == '\n') && s[beg])
	{
		beg++;
	}
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && s[end] \
			&& end > beg)
	{
		end--;
	}
	return (ft_strsub(s, beg, (end - beg + 1)));
}
