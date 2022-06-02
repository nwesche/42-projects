# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 10:36:54 by nwesche           #+#    #+#              #
#    Updated: 2022/05/23 17:58:42 by nwesche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= so_long

CFLAGS = -Wall -Wextra -Werror -I. -ggdb3
CC				= gcc
MLX				= mlx_linux/libmlx_Linux.a
RM				= rm -f

SRC=	so_long.c \
				hooks/hooks.c \
				hooks/move.c \
				img/init_img.c \
				map/check_map.c \
				map/check_map2.c \
				map/check_map3.c \
				map/get_map.c \
				map/read_map.c \
				map/read_map2.c \
				error/handle_errors.c \
				utils/ft_putnbr_fd.c \
				utils/ft_putstr_fd.c \
				utils/ft_exit.c \
				utils/ft_strjoin.c \
				utils/ft_strlen.c \
				utils/ft_calloc.c \
				utils/ft_bzero.c 

GNL = gnl/get_next_line.c \
			gnl/get_next_line_utils.c 


all: $(NAME)

$(NAME):	$(SRC)
			make -C ./mlx_linux
			$(CC) $(SRC) $(MLX) $(GNL) -lXext -lX11 -lm -lz -o $(NAME)

clean:		clean
			$(RM) $(NAME)

fclean:		clean
			$(RM) $(NAME)

re: fclean all