# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 10:56:34 by bbazagli          #+#    #+#              #
#    Updated: 2023/08/07 16:20:25 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strlen.c \
	ft_substr.c \
	ft_strdup.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_strnstr.c \
	ft_strjoin.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_calloc.c \
	ft_memcpy.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_memset.c \
	ft_bzero.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c

SRC_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstmap.c \
	ft_lstiter.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstadd_back.c \
	ft_lstlast.c \
	ft_lstsize.c

OBJ = $(SRC:%.c=%.o)

OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)

bonus: $(OBJ_BONUS)

%.o: %.c libft.h
	gcc -Wall -Wextra -Werror -c $< -o $@
	ar rc $(NAME) $@

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# so:
# 	gcc -nostartfiles -fPIC -Wall -Wextra -Werror $(SRC) $(SRC_BONUS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJ_BONUS)

# phony targets are not associated with files and will always be considered out-of-date, triggering their associated commands to be executed.
.PHONY: all clean fclean re bonus