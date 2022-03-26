# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 14:32:23 by dredfort          #+#    #+#              #
#    Updated: 2022/03/12 19:32:35 by dredfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= 	AaaaandOpen
HDRS		=	ClapTrap.hpp
SRCS 		= 	ClapTrap.cpp main.cpp
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

CC			= 	c++
FLAGS		= 	-Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) 	: 	$(OBJS) $(HDRS)
				$(CC) $(FLAGS) $(OBJS) -o $@

%.o 		: 	%.cpp $(HDRS)
				$(CC) $(FLAGS) -c $< -o $@

clean 		:
				@rm -f $(OBJS)

fclean 		: 	clean
				@rm -f $(NAME)

re 			: 	fclean all

.PHONY 		: 	all clean fclean re
