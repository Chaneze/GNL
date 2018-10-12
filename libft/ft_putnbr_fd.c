/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:44:56 by caroua            #+#    #+#             */
/*   Updated: 2017/11/19 14:52:41 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nblong;

	nblong = n;
	if (nblong < 0)
	{
		ft_putchar_fd('-', fd);
		nblong = -nblong;
	}
	if (nblong < 10)
	{
		ft_putchar_fd('0' + nblong, fd);
	}
	else
	{
		ft_putnbr_fd(nblong / 10, fd);
		ft_putchar_fd('0' + (nblong % 10), fd);
	}
}
