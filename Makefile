# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 12:41:48 by bhibbeln          #+#    #+#              #
#    Updated: 2025/04/09 13:56:23 by bhibbeln         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libft.a
# CC = gcc
# SRCS = .
# SRC = $(wildcard $(SRCS)/*.c)
# CFLAGS = -Wall -Wextra -Werror
# OBJS = $(SRC:.c=.o)

# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# all: $(NAME)

# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f $(NAME)

# re: clean
# 	make

# .PHONY: clean fclean all re

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = .
SRC = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(filter-out %_bonus.o, $(SRC:.c=.o))
BONUS_SRC = $(wildcard $(SRCS_DIR)/*_bonus.c)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus