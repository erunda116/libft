CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER_FILES = libft.h
SRC = ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \ 
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:%.c=%.o)
%.o: %.c $(HEADER_FILES)
	$(CC) $(FLAGS) -I. -c $< -o $@
$(NAME): $(OBJ)
	ar -rc $@ $(OBJ)
bonus: $(BONUS_OBJ)
	$(CC) $(FLAGS) -I -c $< -o $@
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
#	gcc -nostartfiles -shared -o libft.so $(OBJ)
all: $(NAME)
re: fclean all
clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJ)
fclean: clean
	rm -f $(NAME)
.PHONY: all re clean fclean
