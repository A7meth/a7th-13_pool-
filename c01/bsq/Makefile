# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: a7th <a7th@student.42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 19:45:00 by a7th              #+#    #+#              #
#    Updated: 2025/11/03 19:50:00 by a7th             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = bsq.c solver.c utils.c
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

