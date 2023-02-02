# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 01:01:16 by aben-nei          #+#    #+#              #
#    Updated: 2023/02/03 00:23:09 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = minitalk.h
SRCS = ft_atoi.c client.c server.c ft_putnbr_fd.c ft_putchar_fd.c \
		ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_bzero.c ft_memset.c 
OBJ = $(SRCS:%.c=%.o)

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
%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

client: client.c
	@$(CC) $(CFLAGS) $< $(NAME) -o $@
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m<<creation a client is done !!>>\033[0m"

server: server.c
	@$(CC) $(CFLAGS) $< $(NAME) -o $@
	@for i in {1..40}; do \
	printf "\033[42m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"
	@echo "\033[0;32m<<creation a server is done !!>>\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31m#############################################################\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#     Remove The Object file And Server / Client            #\033[0m"
	@echo "\033[0;31m#                                                           #\033[0m"
	@echo "\033[0;31m#############################################################\033[0m"

clean:
	@$(RM) $(OBJ) client server
	@for i in {1..40}; do \
	printf "\033[41m \033[0m" $$i; \
	sleep 0.03; \
	done
	@echo "\n"

re: fclean all

banner:
	@echo "\n"
	@echo "\033[34m  ███╗░░░███╗██╗███╗░░██╗██╗████████╗░█████╗░██╗░░░░░██╗░░██╗\033[0m"
	@echo "\033[34m  ████╗░████║██║████╗░██║██║╚══██╔══╝██╔══██╗██║░░░░░██║░██╔╝\033[0m"
	@echo "\033[34m  ██╔████╔██║██║██╔██╗██║██║░░░██║░░░███████║██║░░░░░█████═╝░\033[0m"
	@echo "\033[34m  ██║╚██╔╝██║██║██║╚████║██║░░░██║░░░██╔══██║██║░░░░░██╔═██╗░\033[0m"
	@echo "\033[34m  ██║░╚═╝░██║██║██║░╚███║██║░░░██║░░░██║░░██║███████╗██║░╚██╗\033[0m"
	@echo "\033[34m  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝\033[0m"
	@echo "\n"
	@echo "----------------- Making Filles (Mandatory)... ------------------"
	@echo "\n"

