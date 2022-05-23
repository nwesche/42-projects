# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 11:55:55 by nwesche           #+#    #+#              #
#    Updated: 2022/01/27 16:04:32 by nwesche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -I.
CC				= gcc
RM				= rm -f

FILES =		ft_printf.c \
					srcs/ft_print_c.c \
					srcs/ft_print_hex_l.c \
					srcs/ft_print_hex_u.c \
					srcs/ft_print_p.c \
					srcs/ft_print_percent.c \
					srcs/ft_print_s.c \
					srcs/ft_print_u.c \
					srcs/ft_print_unsigned_d.c \


OBJS			= $(FILES:.c=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus