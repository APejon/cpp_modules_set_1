# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 13:02:18 by amalbrei          #+#    #+#              #
#    Updated: 2023/07/15 13:45:35 by amalbrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98
RM = rm -rf
SRC = main.cpp Harl.cpp
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