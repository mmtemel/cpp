# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 02:13:43 by mtemel            #+#    #+#              #
#    Updated: 2023/02/22 14:40:51 by mtemel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-Wno-shadow #-Wshadow
SRCS = *.cpp
OBJS = $(SRCS:.cpp = .o)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
		@echo "\033[1;32mCOMPILED SUCCESSFULLY\033[0m"

all: $(NAME)

clean:
		@echo "\033[1;32mCLEAN\033[0m"
		@rm -rf $(NAME)

fclean:
		@echo "\033[1;32mFCLEAN\033[0m"
		@make clean

re:
		@echo "\033[1;32mREMAKE\033[0m"
		@make fclean
		@make all

exe:
		@echo "\033[1;32mSTART EXECUTING\033[0m"
		@./$(NAME)
		@echo "\033[1;32mDONE EXECUTING\033[0m"
