NAME	=	push_swap
SRCS	=	$(wildcard ./*.c ./utils/*.c)
OBJS	=	${SRCS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

all	:	${NAME}

${NAME}	:	${OBJS}
	make -sC ./libft
	make -sC ./ft_printf
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L./ft_printf -lftprintf -L./ft_printf/utils -lutils -L./libft -lft
clean	:
	make clean -sC ./libft
	make clean -sC ./ft_printf
	rm -f ${OBJS}
fclean	:	clean
	make fclean -sC ./libft
	make fclean -sC ./ft_printf
	rm -f ${NAME}
re	:	fclean all
