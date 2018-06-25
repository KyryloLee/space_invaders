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

# # Name of program.
# NAME = ft_retro

# # Compaling with flags.
# CC = clang++
# FLAGS = -Wall -Wextra -Werror -lncurses

# # Source files.
# SRC = main.cpp Game.cpp Player.cpp Objects.cpp Bullets.cpp Enemy.cpp Boss.cpp Stars.cpp

# HEADERS = Game.hpp Player.hpp Objects.hpp Bullets.hpp Enemy.hpp Boss.hpp Stars.hpp

# # Object files.
# OBJ = $(SRCS:.cpp=.o)

# # Header file
# INCL = 

# # Make project.
# all: $(NAME) $(OBJ)

# # Compile all needed files.
# $(NAME): $(OBJ) $(HEADERS)
# 	$(CC) $(FLAGS) -c $(OBJ) -o $(NAME)

# # %.o : %.cpp $(HEADERS)
# # 	$(CC)  $(FLAGS) -c -o $@ $<

# # Check modifications.
# $(OBJ): $(SRC)
# 	$(CC) $(FLAGS) -c $<
# # Debuging
# debug:
# 	$(CC) -lncurses $(SRC) -g -o $(NAME)
# # Remove all object files.
# clean:
# 	rm -f $(OBJ)

# # Remove created project files.
# fclean:
# 	rm -f $(NAME)

# # Re-make project.
# re: fclean all


NAME = ft_retro
CC	=	clang++

CFLAGS	=	-std=c++98 -Wall -Wextra -Werror -g

HEADERS = Game.hpp Player.hpp Objects.hpp Bullets.hpp Enemy.hpp Boss.hpp Stars.hpp IObjClass.hpp

SRCS = main.cpp Game.cpp Player.cpp Objects.cpp Bullets.cpp Enemy.cpp Boss.cpp Stars.cpp



OBJ = $(SRCS:.cpp=.o)


all: $(NAME) $(OBJ)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -lncurses

%.o : %.cpp $(HEADERS)
	$(CC)  $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
