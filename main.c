/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 05:26:42 by jrameau           #+#    #+#             */
/*   Updated: 2018/10/12 10:03:51 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	int 	i;
	int		fd;
	char	*line;

	fd = open("m83.txt", O_RDONLY);
	i = get_next_line(fd, &line);
	ft_putendl(line);
	printf("\n%d\n", i);
	free(line);
	return (0);
}
