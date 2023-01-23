# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 23:00:48 by aben-nei          #+#    #+#              #
#    Updated: 2023/01/23 10:19:59 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
NAME_BNS = checker
RM = rm -rf
OBJ_DIR = obj/
HDR = push_swap.h

SRC = ft_atoi.c big_sort.c ft_lstadd_back.c ft_lstadd_front.c \
	ft_lstlast.c ft_lstsize.c instriction.c instriction2.c push_swap_utils.c \
	utils.c ft_lstnew.c ft_putstr_fd.c ft_big_sort.c easy_sort.c push_swap.c \
	ft_five_numbers.c utils2.c get_next_line_utils.c ft_split.c \

SRC_BNS = checker.c ft_atoi.c big_sort.c ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstlast.c ft_lstsize.c instriction.c instriction2.c push_swap_utils.c \
		utils.c ft_lstnew.c ft_putstr_fd.c get_next_line.c get_next_line_utils.c \
		utils2.c ft_split.c checker_utils.c\

OBJ = ${SRC:%.c=%.o}
OBJS = ${addprefix $(OBJ_DIR),$(OBJ)}
OBJ_BNS = ${SRC_BNS:%.c=%.o}
BOBJS = ${addprefix $(OBJ_DIR),$(OBJ_BNS)}

all : ${OBJ_DIR} ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

bonus :${OBJ_DIR}  ${NAME_BNS}

${OBJ_DIR} :
	@mkdir $(OBJ_DIR)

${NAME_BNS}: ${BOBJS}
	${CC} ${CFLAGS} ${BOBJS} -o $@

${OBJ_DIR}%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME} ${NAME_BNS}

fclean_BNS : clean_BNS
	${RM} ${NAME_BNS}

clean :
	${RM} ${OBJ_DIR}
clean_BNS :
	${RM} ${OBJ_BNS}

re : fclean fclean_BNS all bonus

.PHONY : fclean clean