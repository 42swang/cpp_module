# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swang <swang@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 11:34:46 by swang             #+#    #+#              #
#    Updated: 2022/01/26 17:13:33 by swang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CLANG = c++

CPPFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o :
		$(CLANG) $(CPPFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
		$(CLANG) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re