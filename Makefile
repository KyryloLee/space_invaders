# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 16:32:14 by klee              #+#    #+#              #
#    Updated: 2018/06/08 16:32:16 by klee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of program.
NAME = ft_retro

# Compaling with flags.
CC = g++
FLAGS = -Wall -Wextra -Werror

# Source files.
SRC = main.cpp Game.cpp Player.cpp Objects.cpp Bullets.cpp Enemy.cpp Boss.cpp

# Object files.
OBJ = $(SRC:.cpp=.o)

# Header file
INCL = 

# Make project.
all: $(NAME)

# Compile all needed files.
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -c
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) -lncurses

# Check modifications.
$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $<
# Debuging
debug:
	$(CC) -lncurses $(SRC) -g -o $(NAME)
# Remove all object files.
clean:
	rm -f $(OBJ)

# Remove created project files.
fclean:
	rm -f $(NAME)

# Re-make project.
re: fclean all

