CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar -rc
RM = rm -f
HDR = libftprintf.h

SRC = ft_printf.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \

OBJ = ${SRC:%.c=%.o}

all : ${NAME}

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

%.o : %.c ${HDR}
	${cc} ${CFLAGS} $< -o $@

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : fclean clean