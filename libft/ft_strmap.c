/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:13:24 by caroua            #+#    #+#             */
/*   Updated: 2017/11/20 11:02:14 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	length;
	size_t	i;
	char	*new;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	length = ft_strlen(s);
	if ((new = (char *)malloc((length + 1) * sizeof(char))) == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		new[i] = f(s[i]);
		i++;
	}
	new[length] = '\0';
	return (new);
}
