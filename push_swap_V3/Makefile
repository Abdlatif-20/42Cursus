# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 23:00:48 by aben-nei          #+#    #+#              #
#    Updated: 2023/01/26 02:54:40 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
NAME_BNS = checker
RM = rm -rf
HDR = push_swap.h
SRC = mandatory/ft_atoi.c mandatory/big_sort.c mandatory/ft_lstadd_back.c mandatory/push_swap.c mandatory/ft_lstadd_front.c \
	mandatory/ft_lstlast.c mandatory/ft_lstsize.c mandatory/instriction.c mandatory/instriction2.c mandatory/push_swap_utils.c \
	mandatory/utils.c mandatory/ft_lstnew.c mandatory/ft_putstr_fd.c mandatory/easy_sort.c mandatory/ft_five_numbers.c \
	mandatory/utils2.c bonus/get_next_line_utils.c mandatory/ft_split.c mandatory/ft_lstclear.c mandatory/ft_ten_number.c \

SRC_BNS = bonus/checker.c mandatory/ft_atoi.c mandatory/ft_lstadd_back.c mandatory/ft_lstadd_front.c \
		mandatory/ft_lstlast.c mandatory/ft_lstsize.c mandatory/instriction.c mandatory/instriction2.c mandatory/push_swap_utils.c \
		mandatory/utils.c mandatory/ft_lstnew.c mandatory/ft_putstr_fd.c bonus/get_next_line.c bonus/get_next_line_utils.c \
		mandatory/utils2.c mandatory/ft_split.c mandatory/ft_lstclear.c bonus/ft_strncmp.c\

OBJ = ${SRC:%.c=%.o}
OBJ_BNS = ${SRC_BNS:%.c=%.o}

all: banner ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o $@

bonus : banner_bns ${OBJ_BNS} ${NAME_BNS}

	
${NAME_BNS}: ${OBJ_BNS}
	${CC} ${CFLAGS} ${OBJ_BNS} -o $@

%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME} ${NAME_BNS}

fclean_bns : clean_bns
	${RM} ${NAME_BNS}

clean :
	${RM} OBJ
clean_bns :
	${RM} OBJ_BNS

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