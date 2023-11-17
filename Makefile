
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f



SRC = ft_atoi.c ft_isdigit.c ft_strlcat.c ft_strnstr.c main.c \
ft_isalnum.c ft_isprint.c ft_strlcpy.c  ft_strrchr.c \
ft_isalpha.c ft_strlen.c ft_tolower.c \
ft_isascii.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_memset.c\
ft_bzero.c ft_memcpy.c ft_memmove.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_strdup.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

 
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)


so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
