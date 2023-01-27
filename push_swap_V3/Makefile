# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 23:00:48 by aben-nei          #+#    #+#              #
#    Updated: 2023/01/27 03:11:45 by aben-nei         ###   ########.fr        #
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
	@echo "\n"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#         The Compilation Mandatory is Finished             #\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#############################################################\033[0m"

bonus : banner_bns ${OBJ_BNS} ${NAME_BNS}

	
${NAME_BNS}: ${OBJ_BNS}
	${CC} ${CFLAGS} ${OBJ_BNS} -o $@
	@echo "\n"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#         The Compilation Bonus is Finished                 #\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#############################################################\033[0m"

%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME} ${NAME_BNS}
	@echo "\n"
	@echo "\033[0;31m#############################################################\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#            Remove The Object file Mandatory               #\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#############################################################\033[0m"

fclean_bns : clean_bns
	${RM} ${NAME_BNS}
	@echo "\n"
	@echo "\033[0;31m#############################################################\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#              Remove The Object file Bonus                 #\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#############################################################\033[0m"

clean :
	${RM} ${OBJ}
clean_bns :
	${RM} ${OBJ_BNS}

re : fclean fclean_bns all bonus

.PHONY : fclean clean clean_bns fclean_bns

banner:
	@echo "\n"
	@echo "\033[0;32m ██████╗░██╗░░░██╗░██████╗██╗░░██╗░░░░░░░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░\033[0m"
	@echo "\033[0;32m ██╔══██╗██║░░░██║██╔════╝██║░░██║░░░░░░██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗\033[0m"
	@echo "\033[0;32m ██████╔╝██║░░░██║╚█████╗░███████║█████╗╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝\033[0m"
	@echo "\033[0;32m ██╔═══╝░██║░░░██║░╚═══██╗██╔══██║╚════╝░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░\033[0m"
	@echo "\033[0;32m ██║░░░░░╚██████╔╝██████╔╝██║░░██║░░░░░░██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░\033[0m"
	@echo "\033[0;32m ╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝░░░░░░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░\033[0m"
	@echo "\n"
	@echo "------------------------- Making Filles (Mandatory)... ----------------------"
	@echo "\n"

banner_bns:
	@echo "\n"
	@echo "\033[0;34m ░█████╗░██╗░░██╗███████╗░█████╗░██╗░░██╗███████╗██████╗░ \033[0m"
	@echo "\033[0;34m ██╔══██╗██║░░██║██╔════╝██╔══██╗██║░██╔╝██╔════╝██╔══██╗ \033[0m"
	@echo "\033[0;34m ██║░░╚═╝███████║█████╗░░██║░░╚═╝█████═╝░█████╗░░██████╔╝ \033[0m"
	@echo "\033[0;34m ██║░░██╗██╔══██║██╔══╝░░██║░░██╗██╔═██╗░██╔══╝░░██╔══██╗ \033[0m"
	@echo "\033[0;34m ╚█████╔╝██║░░██║███████╗╚█████╔╝██║░╚██╗███████╗██║░░██║ \033[0m"
	@echo "\033[0;34m ░╚════╝░╚═╝░░╚═╝╚══════╝░╚════╝░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝ \033[0m"
	@echo "\n"
	@echo "------------------------- Making Filles (Bonus)... ----------------------"
	@echo "\n"

