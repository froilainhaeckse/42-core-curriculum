# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 12:41:53 by tkupler           #+#    #+#              #
#    Updated: 2024/04/17 15:36:38 by tkupler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

TEST_SRC = $(wildcard specs/*.c)

TEST_OBJ = $(TEST_SRC:.c=.o)

TEST_EXEC = test

$(NAME): $(OBJ)
	ar rcs $@ $^

$(TEST_EXEC): $(TEST_OBJ) $(NAME)
	cc $(CFLAGS) -o $@ $^

all: $(NAME)

clean:
	rm -rf $(OBJ) $(TEST_OBJ) $(NAME) $(TEST_EXEC)

fclean:
	clean
	rm -rf $(OBJ)

re:
	flean all

.PHONY: all, clean, fclean, re, test