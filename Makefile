NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = ft_printf.c ft_puthex.c ft_putnbr.c ft_putsigned.c \
		ft_putstr.c ft_putptr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re