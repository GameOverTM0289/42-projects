# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibro <aibro@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 14:52:27 by aibro             #+#    #+#              #
#    Updated: 2025/11/10 17:40:23 by aibro            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 
LIBFT_DIR = ../Common-Core---Libft-8850acc4-ac0b-477b-a9ef-cb949edddbf6
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = ft_printf.c \
ft_printf_char.c \
ft_printf_str.c \
ft_printf_nbr.c \
ft_printf_unsigned.c \
ft_printf_hex.c \
ft_printf_ptr.c \
conv_handler.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
