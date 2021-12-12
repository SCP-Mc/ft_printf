NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putunbr.c \
		ft_len.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c ft_printf.h
	cc $(FLAGS) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all