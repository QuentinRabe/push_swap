NAME	=	libutils.a
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f

SRCS	=	$(wildcard ./*.c)

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)
$(NAME)	:	$(OBJS)
		ar -rcs $(NAME) $(OBJS)
clean	:
		$(RM) $(OBJS)
fclean	:	clean
		$(RM) $(NAME)
re	: 	fclean all
.PHONY: fclean clean all bonus re
