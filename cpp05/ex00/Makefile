# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 13:32:35 by swang             #+#    #+#              #
#    Updated: 2022/03/16 16:39:38 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		Bureaucrat.cpp

OBJS = ${SRCS:.cpp=.o}

.cpp.o :
	${CXX} ${CXXFLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
