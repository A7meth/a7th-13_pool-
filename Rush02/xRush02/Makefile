# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 17:20:00 by a7th              #+#    #+#              #
#    Updated: 2025/11/03 18:45:00 by a7th             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = rush02.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

