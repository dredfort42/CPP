# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 14:32:23 by dredfort          #+#    #+#              #
#    Updated: 2022/03/09 20:53:29 by dredfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= 	SedIsForLosers
HDRS		=	Stream.hpp
SRCS 		= 	Stream.cpp main.cpp
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
