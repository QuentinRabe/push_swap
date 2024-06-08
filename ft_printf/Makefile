NAME	=	libftprintf.a
SRCS	=	$(wildcard ./*.c)
OBJS	=	${SRCS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
TOTAL_FILES := $(words $(SRCS))
COMPILE_COUNT	:=	0
MAX_MESSAGE_LEN := 40

define compilation_progress
	@$(CC) $(CFLAGS) -c $< -o $@
	$(eval COMPILE_COUNT := $(shell echo $$(($(COMPILE_COUNT) + 1))))
	@if [ "$(COMPILE_COUNT)" -eq "1" ]; then \
		printf "\n\033[1;92mMake FT_PRINTF⏳\033[0m"; \
		printf "%*s" $(MAX_MESSAGE_LEN) ""; \
		printf "\r"; \
	fi;
	@if [ "$(COMPILE_COUNT)" -eq "$(TOTAL_FILES)" ]; then \
		printf "\033[1;92mFT_PRINTF⚡\033[0m"; \
		printf "%*s" $(MAX_MESSAGE_LEN) ""; \
		printf "\r"; \
	fi;
	@sleep 1
endef

./%.o	:	./%.c
		$(compilation_progress)
./utils/%.o	:	./utils/%.c
		$(compilation_progress)

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
