# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 14:32:23 by dredfort          #+#    #+#              #
#    Updated: 2022/03/17 15:08:33 by dredfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= 	CoffeeMaking
HDRS		=	Bureaucrat.hpp AForm.hpp Intern.hpp\
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp
SRCS 		= 	Bureaucrat.cpp AForm.cpp Intern.cpp main.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp 
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

CC			= 	c++
FLAGS		= 	-Wall -Werror -Wextra -std=c++98 -Wshadow -g

all : $(NAME)

$(NAME) 	: 	$(OBJS) $(HDRS)
				$(CC) $(FLAGS) $(OBJS) -o $@

%.o 		: 	%.cpp $(HDRS)
				$(CC) $(FLAGS) -c $< -o $@

clean 		:
				@rm -f $(OBJS)

fclean 		: 	clean
				@rm -f $(NAME)
				@rm -rf *_shrubbery

re 			: 	fclean all

.PHONY 		: 	all clean fclean re
