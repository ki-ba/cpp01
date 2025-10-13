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
CC = cc
CFLAGS = -Wall -Wextra -Werror -std=cpp98

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.c=%.o))

.PHONY : all
	all : $(NAME)

.PHONY : re
re : fclean all

.PHONY : clean
clean : 
	rm -rf $(OBJ)

.PHONY : fclean
fclean : clean
	rm -rf $(NAME)

$(NAME) : $(OBJ)

$(OBJ_DIR)%.o : %.c
	$(CC) $(CFLAGS)
