# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeuleya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/18 16:04:10 by jkeuleya          #+#    #+#              #
#    Updated: 2016/10/18 16:04:11 by jkeuleya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

NAME = Grace

CFLAGS = -Wall -Werror -Wextra
SRC = Grace.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -rf $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
