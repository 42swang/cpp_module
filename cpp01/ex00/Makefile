# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 11:38:36 by swang             #+#    #+#              #
#    Updated: 2022/01/28 11:43:49 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o :
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re