# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 09:20:27 by kbarru            #+#    #+#              #
#    Updated: 2025/10/07 16:30:12 by kbarru           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = harl

OBJ_DIR = .obj/
INC_DIR = inc/
SRC_DIR = src/

SRC = main.cpp Harl.cpp
INC_R = Harl.hpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.cpp=%.o))
INC = $(addprefix $(INC_DIR), $(INC_R))

.PHONY : all
all : $(NAME)

.PHONY : re
re : fclean
	$(MAKE) all

.PHONY : clean
clean : 
	rm -rf $(OBJ_DIR)

.PHONY : fclean
fclean : clean
	rm -rf $(NAME)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
