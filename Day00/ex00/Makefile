# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myprosku <myprosku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/15 14:58:43 by myprosku          #+#    #+#              #
#    Updated: 2018/04/03 15:38:23 by myprosku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra 
 
all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@g++ -c $(FLAGS) -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
