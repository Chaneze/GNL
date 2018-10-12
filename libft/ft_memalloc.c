/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:05:12 by caroua            #+#    #+#             */
/*   Updated: 2017/11/21 10:47:36 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = (void *)malloc(size * sizeof(size_t))) == NULL)
	{
		return (NULL);
	}
	ft_bzero(mem, size);
	return (mem);
}
