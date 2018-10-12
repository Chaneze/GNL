# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caroua <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/12 08:28:32 by caroua            #+#    #+#              #
#    Updated: 2018/10/12 10:10:23 by caroua           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

HEADER = get_next_line.h
LDFLAGS = -L./libft -lft

SRC =	get_next_line.c \
		main.c

OBJ = $(SRC:.c=.o)

all:  $(NAME)

$(NAME):
	@make -C libft
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@gcc -Wall -Werror -Wextra -g $(OBJ) ./libft/libft.a -o $(NAME)

clean:
	@make -C libft clean
	@rm -f $(OBJ)

fclean:		clean
	@make -C libft fclean
	@rm -f $(NAME)

re:			fclean all
