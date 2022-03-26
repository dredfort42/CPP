# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 14:32:23 by dredfort          #+#    #+#              #
#    Updated: 2022/03/21 16:08:41 by dredfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= 	StartWithFewFunctions
HDRS		=	whatever.hpp
SRCS 		= 	main.cpp
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

CC			= 	c++
FLAGS		= 	-Wall -Werror -Wextra -std=c++98 -Wshadow -g -fsanitize=address 

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
