# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 19:51:19 by fmanzana          #+#    #+#              #
#    Updated: 2023/05/04 19:51:19 by fmanzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = agenda

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Contact.cpp\
		PhoneBook.cpp\
		Agenda.cpp\

OBJS = $(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Agenda compiled!!"

%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -f $(OBJS)

fclean:		clean
	@rm -f $(NAME)
	@echo "Everything cleaned!!"

re:			fclean all

.PHONY: all clean fclean re
