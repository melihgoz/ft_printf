NAME    := libftprintf.a
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror
SRC     := ft_absolute.c ft_convert.c ft_printf.c ft_putchar.c ft_putstr.c ft_strlen.c
OBJ     := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
