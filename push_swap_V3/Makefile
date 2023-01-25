# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 23:00:48 by aben-nei          #+#    #+#              #
#    Updated: 2023/01/25 12:13:41 by aben-nei         ###   ########.fr        #
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
	utils.c ft_lstnew.c ft_putstr_fd.c easy_sort.c push_swap.c ft_five_numbers.c \
	utils2.c get_next_line_utils.c ft_split.c ft_lstclear.c ft_ten_number.c\

SRC_BNS = checker.c ft_atoi.c ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstlast.c ft_lstsize.c instriction.c instriction2.c push_swap_utils.c \
		utils.c ft_lstnew.c ft_putstr_fd.c get_next_line.c get_next_line_utils.c \
		utils2.c ft_split.c ft_lstclear.c \

OBJ = ${SRC:%.c=%.o}
OBJS = ${addprefix $(OBJ_DIR),$(OBJ)}
OBJ_BNS = ${SRC_BNS:%.c=%.o}
B_OBJ = ${addprefix $(OBJ_DIR),$(OBJ_BNS)}

all: banner ${OBJ_DIR} ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

bonus : banner_bns ${OBJ_DIR}  ${NAME_BNS}

${OBJ_DIR} :
	@mkdir $(OBJ_DIR)

${NAME_BNS}: ${B_OBJ}
	${CC} ${CFLAGS} ${B_OBJ} -o $@

${OBJ_DIR}%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME} ${NAME_BNS}

fclean_bns : clean_bns
	${RM} ${NAME_BNS}

clean :
	${RM} ${OBJ_DIR}
clean_bns :
	${RM} ${OBJ_BNS}

re : fclean fclean_bns all bonus

.PHONY : fclean clean clean_bns fclean_bns

banner:
	@echo "\n"
	@echo "██████╗░██╗░░░██╗░██████╗██╗░░██╗░░░░░░░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░"
	@echo "██╔══██╗██║░░░██║██╔════╝██║░░██║░░░░░░██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║░░░██║╚█████╗░███████║█████╗╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝"
	@echo "██╔═══╝░██║░░░██║░╚═══██╗██╔══██║╚════╝░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░"
	@echo "██║░░░░░╚██████╔╝██████╔╝██║░░██║░░░░░░██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░"
	@echo "╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝░░░░░░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░"
	@echo "\n"
	@echo "------------------------- Making Filles (Mandatory)... ----------------------"
	@echo "\n"

banner_bns:
	@echo "\n"
	@echo "██████╗░██╗░░░██╗░██████╗██╗░░██╗░░░░░░░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░"
	@echo "██╔══██╗██║░░░██║██╔════╝██║░░██║░░░░░░██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║░░░██║╚█████╗░███████║█████╗╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝"
	@echo "██╔═══╝░██║░░░██║░╚═══██╗██╔══██║╚════╝░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░"
	@echo "██║░░░░░╚██████╔╝██████╔╝██║░░██║░░░░░░██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░"
	@echo "╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝░░░░░░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░"
	@echo "\n"
	@echo "----------------------- Making Filles (Bonus) ... ----------------------------"
	@echo "\n"