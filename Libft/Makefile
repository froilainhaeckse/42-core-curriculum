# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 12:41:53 by tkupler           #+#    #+#              #
#    Updated: 2024/05/13 12:29:59 by tkupler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

# Determine the operating system
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
    LDLIBS += -lbsd
endif

# TO DO: REMOVE wildcard function
SRC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
	ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
	ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
	ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c

OBJ = $(SRC:.c=.o)

# TO DO: REMOVE wildcard function
TEST_SRC = $(wildcard specs/*.c)

TEST_OBJ = $(TEST_SRC:.c=.o)

TEST_EXEC = test

$(NAME): $(OBJ)
	ar rcs $@ $^

$(TEST_EXEC): $(TEST_OBJ) $(NAME)
	cc $(CFLAGS) -o $@ $^ $(LDLIBS)
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