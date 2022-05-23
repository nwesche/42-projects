# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/01 15:30:44 by nwesche           #+#    #+#              #
#    Updated: 2022/02/28 11:29:35 by nwesche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I.
CC				= gcc
RM				= rm -f

SERVER_C = server.c \
				srcs/ft_putnbr_fd.c \
				srcs/ft_putstr_fd.c \
				srcs/ft_str_isnumeric.c \
				srcs/ft_straddc.c \
				srcs/ft_isdigit.c \
				srcs/ft_strlen.c \
				srcs/ft_strdup.c \
				srcs/ft_atoi.c 

SERVER_OBJS = $(SERVER_C:.c=.o)

CLIENT_C = client.c \
				srcs/ft_putnbr_fd.c \
				srcs/ft_putstr_fd.c \
				srcs/ft_str_isnumeric.c \
				srcs/ft_straddc.c \
				srcs/ft_isdigit.c \
				srcs/ft_strlen.c \
				srcs/ft_strdup.c \
				srcs/ft_atoi.c 

CLIENT_OBJS = $(CLIENT_C:.c=.o)

all: server client

bonus: bonus_c bonus_s

server: $(SERVER_OBJS)
			$(CC) $(SERVER_OBJS) minitalk.h -o server

client:	$(CLIENT_OBJS)
		$(CC) $(CLIENT_OBJS) minitalk.h -o client

bonus_s:	$(SERVER_OBJS)
		$(CC) $(SERVER_OBJS) minitalk.h -o server_bonus

bonus_c:	$(CLIENT_OBJS)
		$(CC) $(CLIENT_OBJS) minitalk.h -o client_bonus

clean:
		$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)

fclean: clean
		$(RM) server client server_bonus client_bonus

re: fclean all