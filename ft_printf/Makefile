NAME	=	libftprintf.a
SRCS	=	$(wildcard ./*.c)
OBJS	=	${SRCS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

all	:	${NAME}

${NAME}	:	${OBJS}
	make -C ./utils
	ar -rcs ${NAME} ${OBJS}
clean	:
	make clean -C ./utils
	rm -f ${OBJS}
fclean	:	clean
	make fclean -C ./utils
	rm -f ${NAME}
re	:	fclean all
