/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:29:08 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 15:31:26 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		new[i] = f(i, s[i]);
		i++;
	}
	new[length] = '\0';
	return (new);
}
