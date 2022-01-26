# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 11:34:46 by swang             #+#    #+#              #
#    Updated: 2022/01/26 20:37:20 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror

SRCS =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o :
	c++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		c++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re