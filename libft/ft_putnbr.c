/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:14:25 by caroua            #+#    #+#             */
/*   Updated: 2017/11/18 19:27:22 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long nblong;

	nblong = nb;
	if (nblong < 0)
	{
		ft_putchar('-');
		nblong = -nblong;
	}
	if (nblong < 10)
	{
		ft_putchar('0' + nblong);
	}
	else
	{
		ft_putnbr(nblong / 10);
		ft_putchar('0' + (nblong % 10));
	}
}
