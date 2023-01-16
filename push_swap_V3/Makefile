# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 23:00:48 by aben-nei          #+#    #+#              #
#    Updated: 2023/01/16 20:08:36 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
RM = rm -f
HDR = push_swap.h

SRC = ft_atoi.c big_sort.c ft_lstadd_back.c ft_lstadd_front.c \
	ft_lstlast.c ft_lstsize.c instriction.c instriction2.c main.c \
	push_swap_utils.c utils.c ft_lstnew.c ft_putstr_fd.c ft_big_sort.c easy_sort.c

OBJ = ${SRC:%.c=%.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o $@

%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME}

clean :
	${RM} ${OBJ} ${BNS_O}

re : fclean all

.PHONY : fclean clean