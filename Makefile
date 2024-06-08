NAME	=	push_swap
NAME_BONUS	=	checker
SRCS	=	$(wildcard ./push_swap.c ./utils/*/**.c)
OBJS	=	${SRCS:.c=.o}
SRCS_BONUS	= $(wildcard ./checker.c ./utils/*/**.c ./get_next_line/*.c)
OBJS_BONUS	=	${SRCS_BONUS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
COMPILE_COUNT	:=	0
MAX_MESSAGE_LEN := 40


define compilation_progress
	@$(CC) $(CFLAGS) -c $< -o $@
	$(eval COMPILE_COUNT := $(shell echo $$(($(COMPILE_COUNT) + 1))))
	@printf "\033[1;92mCompiling sources⏳\033[0m";
	@printf "%*s" $(MAX_MESSAGE_LEN) "";
	@printf "\r";
	@sleep 0.1
endef


all	:	${NAME}

bonus	:	${NAME_BONUS}

${NAME}	:	TOTAL_FILES := $(words $(SRCS))

${NAME}	:	${OBJS} end_compilation
	@make -sC ./libft
	@make -sC ./ft_printf
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L./ft_printf -lftprintf -L./ft_printf/utils -lutils -L./libft -lft
	@printf "\n\e[1;92mPush_swap⚡\e[0m\n"

${NAME_BONUS}	:	TOTAL_FILES := $(words $(SRCS_BONUS))

${NAME_BONUS}	:	${OBJS_BONUS} end_compilation
	@make -sC ./libft
	@make -sC ./ft_printf
	@$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS) -L./ft_printf -lftprintf -L./ft_printf/utils -lutils -L./libft -lft
	@printf "\n\e[1;92mChecker⚡\e[0m\n"

end_compilation	:
	@printf "\033[1;92mSources compiled⚡\033[0m";
	@printf "%*s" $(MAX_MESSAGE_LEN) "";
	@printf "\r";

./%.o	:	./%.c
		$(compilation_progress)

./utils/%.o	:	./utils/%.c
		$(compilation_progress)

clean	:
	@make clean -sC ./libft
	@make clean -sC ./ft_printf
	@rm -f ${OBJS} ${OBJS_BONUS}
	@printf "\033[0;101m\033[1;30mDeleting objects\033[0m🚨\n";
	@sleep 0.5

fclean	:	clean
	@make fclean -sC ./libft
	@make fclean -sC ./ft_printf
	@rm -f ${NAME} ${NAME_BONUS}
	@printf "\033[0;101m\033[1;30mDeleting executable\033[0m🚨\n";
	@sleep 0.5

re	:	fclean all

.PHONY	: all bonus fclean clean re
