CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER_FILES = libft.h
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
$(OBJ): %.o: %.c $(HEADER_FILES)
	$(CC) $(FLAGS) -I. -c $< -o $@
$(NAME): $(OBJ)
	ar -rc $@ $(OBJ)
all: $(NAME)
re: fclean all
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
.PHONY: all re clean fclean
