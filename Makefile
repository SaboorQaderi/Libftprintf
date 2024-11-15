# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abqaderi <abqaderi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 11:45:36 by abqaderi          #+#    #+#              #
#    Updated: 2024/11/13 18:00:09 by abqaderi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = ar rcs
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_print_hex.c ft_print_number.c ft_print_pointer.c ft_print_unsigned.c ft_printf.c
OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ../libft
LIBFT_NAME = libft.a
LIBFT = LIBFT_DIR/LIBFT_NAME

all: $(NAME) $(LIBFT)

$(LIBFT) :
	make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(LIBFT) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all