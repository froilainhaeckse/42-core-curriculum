# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkupler <tkupler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 12:41:53 by tkupler           #+#    #+#              #
#    Updated: 2024/04/17 13:13:17 by tkupler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = 

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
    cc $(CFLAGS) -o $@ $^

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	clean
	rm -rf $(OBJ)

re:
	flean all