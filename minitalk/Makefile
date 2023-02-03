# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 01:01:16 by aben-nei          #+#    #+#              #
#    Updated: 2023/02/03 20:09:20 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
NAME_BONUS = minitalk_bonus.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = minitalk.h
SRCS = utils/ft_atoi.c client.c server.c utils/ft_putnbr_fd.c utils/ft_putchar_fd.c \
		utils/ft_putchar_fd.c utils/ft_putnbr_fd.c utils/ft_putstr_fd.c utils/ft_bzero.c utils/ft_memset.c
B_SRC = utils/ft_atoi.c client_bonus.c server_bonus.c utils/ft_putnbr_fd.c utils/ft_putchar_fd.c \
		utils/ft_putchar_fd.c utils/ft_putnbr_fd.c utils/ft_putstr_fd.c utils/ft_bzero.c utils/ft_memset.c
OBJ = $(SRCS:%.c=%.o)
B_OBJ = $(B_SRC:%.c=%.o)

all: banner $(NAME) client server

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#         The Compilation Mandatory is Finished             #\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\n"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: banner_bonus $(NAME_BONUS) client_bonus server_bonus

$(NAME_BONUS): $(B_OBJ)
	@ar rc $(NAME_BONUS) $(B_OBJ)
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#         The Compilation Bonus is Finished                 #\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\n"

client: client.c
	@$(CC) $(CFLAGS) $< $(NAME) -o $@
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m<<creation a client is done !!>>\033[0m"
	@echo "\n"

server: server.c
	@$(CC) $(CFLAGS) $< $(NAME) -o $@
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m<<creation a server is done !!>>\033[0m"
	@echo "\n"

client_bonus: client_bonus.c
	@$(CC) $(CFLAGS) $< $(NAME_BONUS) -o $@
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m<<creation a client_bonus is done !!>>\033[0m"
	@echo "\n"

server_bonus: server_bonus.c
	@$(CC) $(CFLAGS) $< $(NAME_BONUS) -o $@
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m<<creation a server_bonus is done !!>>\033[0m"
	@echo "\n"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31m#############################################################\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#     Remove The Object file And Server / Client            #\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#############################################################\033[0m"

clean:
	@$(RM) $(OBJ) client server
	@echo ""
	@for i in {1..40}; do \
	printf "\033[41m \033[0m" $$i; \
	sleep 0.01; \
	done
	@echo "\n"

fclean_bns: clean_bns
	@$(RM) $(NAME_BONUS)
	@echo "\033[0;31m#############################################################\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m# Remove The Object file And server_bonus / client_bonus    #\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#############################################################\033[0m"

clean_bns:
	@$(RM) $(B_OBJ) client_bonus server_bonus
	@echo ""
	@for i in {1..40}; do \
	printf "\033[41m \033[0m" $$i; \
	sleep 0.01; \
	done
	@echo "\n"

re: fclean all bonus

banner:
	@echo "\n"
	@echo "\033[34m  ███╗░░░███╗██╗███╗░░██╗██╗████████╗░█████╗░██╗░░░░░██╗░░██╗\033[0m"
	@echo "\033[34m  ████╗░████║██║████╗░██║██║╚══██╔══╝██╔══██╗██║░░░░░██║░██╔╝\033[0m"
	@echo "\033[34m  ██╔████╔██║██║██╔██╗██║██║░░░██║░░░███████║██║░░░░░█████═╝░\033[0m"
	@echo "\033[34m  ██║╚██╔╝██║██║██║╚████║██║░░░██║░░░██╔══██║██║░░░░░██╔═██╗░\033[0m"
	@echo "\033[34m  ██║░╚═╝░██║██║██║░╚███║██║░░░██║░░░██║░░██║███████╗██║░╚██╗\033[0m"
	@echo "\033[34m  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝\033[0m"
	@echo "\n"
	@echo "----------------- Making Filles (Mandatory)... --------------"
	@echo "\n"

banner_bonus:
	@echo "\n"
	@echo "\033[34m  ███╗░░░███╗██╗███╗░░██╗██╗████████╗░█████╗░██╗░░░░░██╗░░██╗\033[0m"
	@echo "\033[34m  ████╗░████║██║████╗░██║██║╚══██╔══╝██╔══██╗██║░░░░░██║░██╔╝\033[0m"
	@echo "\033[34m  ██╔████╔██║██║██╔██╗██║██║░░░██║░░░███████║██║░░░░░█████═╝░\033[0m"
	@echo "\033[34m  ██║╚██╔╝██║██║██║╚████║██║░░░██║░░░██╔══██║██║░░░░░██╔═██╗░\033[0m"
	@echo "\033[34m  ██║░╚═╝░██║██║██║░╚███║██║░░░██║░░░██║░░██║███████╗██║░╚██╗\033[0m"
	@echo "\033[34m  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝\033[0m"
	@echo "\n"
	@echo "----------------- Making Filles (Bonus)... ------------------"
	@echo "\n"

