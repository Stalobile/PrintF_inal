# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 13:51:44 by smarco            #+#    #+#              #
#    Updated: 2023/01/31 22:06:45 by smarco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

RM = rm -f

INCLUDE = -I ./

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror -c

HEADER = ft_printf.h

# ici on définit les modules sources de notre projet, séparés par un espace
SRC =	ft_check.c ft_hexa.c ft_unsigned.c ft_printf.c ft_putchar.c \
		ft_putnbr.c ft_putstr.c ft_void.c

OBJ = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -crs $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	$(RM) $(OBJ)
	@echo "\n\t... Suppression des objets...\n"

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJ)
	@echo "\t... suppression lib et bonus...\n"

re: fclean all
