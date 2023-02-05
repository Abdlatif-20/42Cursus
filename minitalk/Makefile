# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 01:01:16 by aben-nei          #+#    #+#              #
#    Updated: 2023/02/05 01:32:57 by aben-nei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
NAME_BONUS = minitalk_bonus.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = minitalk.h
HEADER_BNS = minitalk_bonus.h
SRCS = utils/ft_atoi.c client.c server.c utils/ft_putnbr_fd.c utils/ft_putchar_fd.c \
		utils/ft_putchar_fd.c utils/ft_putnbr_fd.c utils/ft_putstr_fd.c utils/ft_bzero.c utils/ft_memset.c
B_SRC = utils/ft_atoi.c client_bonus.c server_bonus.c utils/ft_putnbr_fd.c utils/ft_putchar_fd.c \
		utils/ft_putchar_fd.c utils/ft_putnbr_fd.c utils/ft_putstr_fd.c utils/ft_bzero.c \
		utils/ft_memset.c utils/ft_strncmp.c
OBJ = $(SRCS:%.c=%.o)
B_OBJ = $(B_SRC:%.c=%.o)

all: banner $(NAME) client server

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo ""
	@for i in {1..50}; do \
	printf "\033[1;36m|\033[0m" $$i; \
	sleep 0.05; \
	done
	@echo ""
	@echo "Compilation of \033[33mMandatory\033[0m: [\033[0;32mOK\033[0m]"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: banner_bonus $(NAME_BONUS) client_bonus server_bonus

$(NAME_BONUS): $(B_OBJ)
	@ar rc $(NAME_BONUS) $(B_OBJ)
	@for i in {1..50}; do \
	printf "\033[1;36m|\033[0m" $$i; \
	sleep 0.05; \
	done
	@echo "\n"
	@echo "Compilation of \033[33mBonus\033[0m: [\033[0;32mOK\033[0m]"

client: client.c
	@$(CC) $(CFLAGS) $< $(NAME) -o $@
	@echo "Compilation of \033[33mclient\033[0m: [\033[0;32mOK\033[0m]"

server: server.c
	@$(CC) $(CFLAGS) $< $(NAME) -o $@
	@echo "Compilation of \033[33mserver\033[0m: [\033[0;32mOK\033[0m]"

client_bonus: client_bonus.c
	@$(CC) $(CFLAGS) $< $(NAME_BONUS) -o $@
	@echo "Compilation of \033[33mclient_bonus\033[0m: [\033[0;32mOK\033[0m]"

server_bonus: server_bonus.c
	@$(CC) $(CFLAGS) $< $(NAME_BONUS) -o $@
	@echo "Compilation of \033[33mserver_bonus\033[0m: [\033[0;32mOK\033[0m]"

fclean: clean
	@$(RM) $(NAME)
	@echo""
	@echo "\033[33mclient\033[0m: client deleted [\033[0;32mdone\033[0m]"
	@echo "\033[33mserver\033[0m: server deleted [\033[0;32mdone\033[0m]"
clean:
	@$(RM) $(OBJ) client server
	@echo ""
	@for i in {1..40}; do \
	printf "\033[1;31m|\033[0m" $$i; \
	sleep 0.05; \
	done

fclean_bns: clean_bns
	@$(RM) $(NAME_BONUS)
	@echo""
	@echo "\033[33mclient_bonus\033[0m: client_bonus deleted [\033[0;32mdone\033[0m]"
	@echo "\033[33mserver_bonus\033[0m: server_bonus deleted [\033[0;32mdone\033[0m]"

clean_bns:
	@$(RM) $(B_OBJ) client_bonus server_bonus
	@echo ""
	@for i in {1..40}; do \
	printf "\033[1;31m|\033[0m" $$i; \
	sleep 0.05; \
	done

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

