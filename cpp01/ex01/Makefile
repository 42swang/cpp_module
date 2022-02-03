# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 13:10:31 by swang             #+#    #+#              #
#    Updated: 2022/02/03 13:15:27 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie01

CXX = C++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		Zombie.cpp\
		ZombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o :
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean :clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re