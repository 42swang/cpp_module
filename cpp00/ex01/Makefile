# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 11:34:46 by swang             #+#    #+#              #
#    Updated: 2022/01/26 20:04:10 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook.cpp

CLANG = c++

CPPFLAGS = -Wall -Wextra -Werror

SRCS =	Contact.cpp\
		PhoneBook.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CLANG) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re