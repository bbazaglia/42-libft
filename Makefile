# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 10:56:34 by bbazagli          #+#    #+#              #
#    Updated: 2023/07/25 09:13:44 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_split.c ft_strlen.c ft_substr.c ft_strdup.c ft_strchr.c ft_strrchr.c ft_strtrim.c ft_strnstr.c ft_strjoin.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_calloc.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memset.c ft_bzero.c ft_strlcat.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strncmp.c

OBJ = ft_split.o ft_strlen.o ft_substr.o ft_strdup.o ft_strchr.o ft_strrchr.o ft_strtrim.o ft_strnstr.o ft_strjoin.o ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_calloc.o ft_memcpy.o ft_memcmp.o ft_memchr.o ft_memmove.o ft_memset.o ft_bzero.o ft_strlcat.o ft_strlcpy.o ft_toupper.o ft_tolower.o ft_strncmp.o

NAME = libft.a

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c -I libft.h $(SRC)
	ar rc $(NAME) $(OBJ)


clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re