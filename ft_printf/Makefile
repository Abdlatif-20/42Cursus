CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
HDR = ft_printf.h

SRC = ft_printf.c ft_putnbr_fd.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putunsignednbr.c ft_check_format.c\
	ft_print_hexa.c ft_print_ptr.c

S_BNS =  ft_printf_bonus.c\

OBJ = ${SRC:%.c=%.o}

BNS_O = ft_printf_bonus.o\

all : ${NAME}

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

bonus : ${OBJ} ${BNS_O}
	${AR} ${NAME} ${OBJ} ${BNS_O}

%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME}

clean :
	${RM} ${OBJ} ${BNS_O}

re : fclean all

.PHONY : fclean clean