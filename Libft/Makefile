# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 12:41:53 by tkupler           #+#    #+#              #
#    Updated: 2024/04/19 15:10:14 by tkupler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

# TO DO: REMOVE wildcard function
SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

# TO DO: REMOVE wildcard function
TEST_SRC = $(wildcard specs/*.c)

TEST_OBJ = $(TEST_SRC:.c=.o)

TEST_EXEC = test

$(NAME): $(OBJ)
	ar rcs $@ $^

$(TEST_EXEC): $(TEST_OBJ) $(NAME)
	cc $(CFLAGS) -o $@ $^ -lbsd
	./$(TEST_EXEC) | cat

all: $(NAME)

clean:
	rm -rf $(OBJ) $(TEST_OBJ)

fclean:
	rm -rf $(OBJ) $(NAME) $(TEST_OBJ) $(TEST_EXEC)

clean_test: test fclean

re:
	fclean all

.PHONY: all, clean, fclean, re, test, clean_test