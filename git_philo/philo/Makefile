# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 13:33:00 by nwesche           #+#    #+#              #
#    Updated: 2022/06/15 20:00:16 by nwesche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo 

CFLAGS = -pthread -Wall -Wextra -Werror #-fsanitize=thread
CC = gcc 

SRC = main.c \
				actions.c \
				init_philos.c \
				checker.c \
				error.c \
				hands.c \
				init_mutex.c \
				time.c \
				utils/utils.c \
				utils/ft_atoi.c \

OBJ = $(SRC:.c=.o) 

all: $(NAME) 

$(NAME): $(OBJ) $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ) 

fclean: clean 
	rm -f $(NAME) 

re: fclean all