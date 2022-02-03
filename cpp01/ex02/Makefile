# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 13:10:31 by swang             #+#    #+#              #
#    Updated: 2022/02/03 14:26:49 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CXX = C++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

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