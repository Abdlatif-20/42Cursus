# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 01:01:16 by aben-nei          #+#    #+#              #
#    Updated: 2023/02/02 03:12:23 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = minitalk.h
SRCS = ft_atoi.c client.c server.c ft_putnbr_fd.c ft_putchar_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c
OBJ = $(SRCS:%.c=%.o)

all: banner $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\n"
	@echo "\033[0;32m#############################################################\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#         The Compilation Mandatory is Finished             #\033[0m"
	@echo "\033[0;32m#                                                           #\033[0m"
	@echo "\033[0;32m#############################################################\033[0m"
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJ) client server

client: client.c
	$(CC) $(CFLAGS) $< $(NAME) -o $@
	@echo "\033[0;32m<<creation a client is done !!>>\033[0m"

server: server.c
	$(CC) $(CFLAGS) $< $(NAME) -o $@
	@echo "\033[0;32m<<creation a server is done !!>>\033[0m"

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

