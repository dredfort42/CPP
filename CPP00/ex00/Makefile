# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 17:45:13 by dredfort          #+#    #+#              #
#    Updated: 2022/03/06 17:45:19 by dredfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
GPP = g++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(GPP) $(OBJS) -o $(NAME)
	clear

$(OBJS): %.o : %.cpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJS) $(NAME)

fclean: clean
	rm -rf $(NAME)

re: clean all

.PHONY: all, re, clean, fclean
