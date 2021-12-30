# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 19:10:46 by ktalbi            #+#    #+#              #
#    Updated: 2021/12/20 13:52:20 by ktalbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
LDIR = libft
LIBFT_A = $(LDIR)/libft.a
RM = rm -rf
CFLAGS = -Wextra -Wall

SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)

MLX = -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LDIR)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_A) $(MLX) -o $(NAME)

clean:
	$(RM) *.o
	$(RM) */*.o

fclean: clean
	$(RM) $(NAME) $(LIBFT_A)

re: clean all

.PHONY: all clean fclean re