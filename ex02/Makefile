# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 15:17:32 by fmanzana          #+#    #+#              #
#    Updated: 2023/05/19 15:21:51 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Account.cpp

OBJS = $(addsuffix .o, $(notdir $(basename $(SRCS))))

all:	$(NAME)

$(OBJS):	$(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Account compiled!!"

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!!"

re:			fclean all

.PHONY: all, clean, fclean, re
