# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 16:20:27 by kbarru            #+#    #+#              #
#    Updated: 2025/10/07 16:30:12 by kbarru           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

OBJ_DIR = .obj/
SRC = main.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = thisisbrain

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))

.PHONY : all
all : $(NAME)

.PHONY : re
re : fclean
	$(MAKE) all

.PHONY : clean
clean : 
	rm -rf $(OBJ)

.PHONY : fclean
fclean : clean
	rm -rf $(NAME)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
