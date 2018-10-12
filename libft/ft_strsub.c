/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:53:42 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 18:31:02 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new;

	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if ((new = (char *)malloc((len + 1) * sizeof(char))) == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[len] = '\0';
	return (new);
}
