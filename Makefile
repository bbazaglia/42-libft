# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 10:56:34 by bbazagli          #+#    #+#              #
#    Updated: 2023/08/03 16:26:20 by bbazagli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_lstadd_front.c \
	ft_lstnew.c \
	ft_putnbr_fd.c \
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

OBJ =  ft_putnbr_fd.o \
	ft_putendl_fd.o \
	ft_putstr_fd.o \
	ft_putchar_fd.o \
	ft_striteri.o \
	ft_strmapi.o \
	ft_itoa.o \
	ft_split.o \
	ft_strlen.o \
	ft_substr.o \
	ft_strdup.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strtrim.o \
	ft_strnstr.o \
	ft_strjoin.o \
	ft_atoi.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_calloc.o \
	ft_memcpy.o \
	ft_memcmp.o \
	ft_memchr.o \
	ft_memmove.o \
	ft_memset.o \
	ft_bzero.o \
	ft_strlcat.o \
	ft_strlcpy.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strncmp.o

OBJ_BONUS = ft_lstnew.o \
	ft_lstadd_front.o \
	ft_lstmap.o \
	ft_lstiter.o \
	ft_lstclear.o \
	ft_lstdelone.o \
	ft_lstadd_back.o \
	ft_lstlast.o \
	ft_lstsize.o

NAME = libft.a

all: $(NAME)

# bonus: 
# 	gcc -Wall -Wextra -Werror -c $(SRC) $(SRC_BONUS)
# 	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	
bonus: 
	gcc -Wall -Wextra -Werror -c $(SRC_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)

$(NAME): $(OBJ)
	gcc -Wall -Wextra -Werror -c $(SRC) 
	ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus