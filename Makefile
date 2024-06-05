NAME	=	push_swap
SRCS	=	$(wildcard ./*.c ./utils/*/**.c)
OBJS	=	${SRCS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
TOTAL_SRCS	=	$(shell echo $(SRCS) | wc -w)
COMPILE_COUNT	=	0

define	compilation_progress
	clear
	@$(CC) $(CFLAGS) -c $< -o $@
	$(eval COMPILE_COUNT = $(shell echo $$(($(COMPILE_COUNT) + 1))))
	@printf "\e[1;36mCompilation progession:\e[0m \e[1;31m[\e[0m\e[1;32m$(COMPILE_COUNT)\e[0m\e[1;36m/\e[0m\e[1;32m$(TOTAL_SRCS)\e[0m\e[1;31m]\e[0m\n"
	@sleep 0.2
endef
all	:	${NAME}
${NAME}	:	${OBJS}
	@make -sC ./libft
	@make -sC ./ft_printf
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L./ft_printf -lftprintf -L./ft_printf/utils -lutils -L./libft -lft
	clear
	@printf "\e[1;32mCompilation finished⚡\e[0m\n"
./%.o	:	./%.c
		$(compilation_progress)
./utils/%.o	:	./utils/%.c
		$(compilation_progress)
clean	:
	clear
	@make clean -sC ./libft
	@make clean -sC ./ft_printf
	@rm -f ${OBJS}
	@printf "\e[1;31m[\e[0m\e[1;32mDeleting objects\e[0m\e[1;31m]\e[0m\n"
	@sleep 1
	clear
fclean	:	clean
	clear
	@make fclean -sC ./libft
	@make fclean -sC ./ft_printf
	@rm -f ${NAME}
	@printf "\e[1;31m[\e[0m\e[1;32mDeleting executable\e[0m\e[1;31m]\e[0m\n"
	@sleep 1
	clear
re	:	fclean all
