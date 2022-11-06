CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rc
RM = rm -f
HDR = ft_printf.h

SRC = ft_printf.c ft_putnbr_fd.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putunsignednbr.c ft_check_format.c\
	ft_print_hexa.c ft_printchar.c ft_print_ptr.c\

OBJ = ${SRC:%.c=%.o}

all : ${NAME}

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

%.o : %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@

fclean : clean
	${RM} ${NAME}

clean :
	${RM} ${OBJ}

re : fclean all

.PHONY : fclean clean