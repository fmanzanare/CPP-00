# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 15:17:32 by fmanzana          #+#    #+#              #
#    Updated: 2023/06/28 19:11:37 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Account.cpp\
		tests.cpp

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Account compiled!!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!!"

re:			fclean all

.PHONY: all clean fclean re
