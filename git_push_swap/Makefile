# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 19:57:07 by nwesche           #+#    #+#              #
#    Updated: 2022/04/20 16:18:04 by nwesche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I. -ggdb3
CC				= gcc
RM				= rm -f

PUSH_SWAP_C = push_swap.c \
								srcs/algorithm_big.c \
								srcs/algorithm_small.c \
								srcs/checker.c \
								srcs/pa_pb.c \
								srcs/ra_rb_rr.c \
								srcs/rra_rrb_rrr.c \
								srcs/sa_sb_ss.c \
								srcs/utils.c \

PUSH_SWAP_O = $(PUSH_SWAP_C:.c=.o)

all: push_swap

push_swap: $(PUSH_SWAP_O) push_swap.h
		$(CC) $(PUSH_SWAP_O) push_swap.h -o push_swap

clean:
	$(RM) $(PUSH_SWAP_O)

fclean:
	$(RM) $(PUSH_SWAP_O) push_swap

re: fclean all