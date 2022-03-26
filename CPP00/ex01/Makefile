# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 17:43:56 by dredfort          #+#    #+#              #
#    Updated: 2022/03/06 17:43:57 by dredfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	PhoneBook
SRCS 		= 	Contact.cpp \
				PhoneBook.cpp \
				main.cpp	
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

CC			= 	g++
FLAGS		= 	-Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) 	: 	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@
				clear

%.o 		: 	%.cpp
				$(CC) $(FLAGS) -c $< -o $@

Contact.o 	: 	Contact.cpp Contact.hpp
PhoneBook.o : 	PhoneBook.cpp PhoneBook.hpp
main.o		: 	Contact.o PhoneBook.o


clean 		:
				@rm -f $(OBJS)

fclean 		: 	clean
				@rm -f $(NAME)

re 			: 	fclean all

.PHONY 		: 	all clean fclean re
