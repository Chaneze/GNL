/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:29:17 by caroua            #+#    #+#             */
/*   Updated: 2018/10/09 11:20:59 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char *)malloc((size + 1) * sizeof(char))) == NULL)
	{
		return (NULL);
	}
	ft_bzero(str, size);
	str[size] = '\0';
	return (str);
}
