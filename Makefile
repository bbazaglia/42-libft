# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 10:56:34 by bbazagli          #+#    #+#              #
#    Updated: 2023/07/18 11:24:45 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c 

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I libft.h

NAME = libft.a

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re