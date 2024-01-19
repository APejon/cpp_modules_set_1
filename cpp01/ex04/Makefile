# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 17:11:00 by amalbrei          #+#    #+#              #
#    Updated: 2023/08/27 15:15:42 by amalbrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98 -fsanitize=address -g3
RM = rm -rf
SRC = main.cpp search_replace.cpp
OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re