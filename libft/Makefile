NAME	=	libft.a
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f
SRCS	=	$(wildcard ./*.c)
OBJS	=	$(SRCS:.c=.o)
TOTAL_FILES := $(words $(SRCS))
COMPILE_COUNT	:=	0
MAX_MESSAGE_LEN := 40

define compilation_progress
	@$(CC) $(CFLAGS) -c $< -o $@
	$(eval COMPILE_COUNT := $(shell echo $$(($(COMPILE_COUNT) + 1))))
	@if [ "$(COMPILE_COUNT)" -eq "1" ]; then \
		printf "\n\033[1;92mMake LIBFT⏳\033[0m"; \
		printf "%*s" $(MAX_MESSAGE_LEN) ""; \
		printf "\r"; \
	fi;
	@if [ "$(COMPILE_COUNT)" -eq "$(TOTAL_FILES)" ]; then \
		printf "\033[1;92mLIBFT⚡\033[0m"; \
		printf "%*s" $(MAX_MESSAGE_LEN) ""; \
		printf "\r"; \
	fi;
endef

./%.o	:	./%.c
		$(compilation_progress)
./utils/%.o	:	./utils/%.c
		$(compilation_progress)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean	:
		$(RM) $(OBJS) $(BONUSOBJS)

fclean	:	clean
		$(RM) $(NAME)

re	: 	fclean all

.PHONY: fclean clean all bonus re
