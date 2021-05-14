NAME = libft.a
SOURCES = ft_atoi.c ft_isprint.c ft_memset.c ft_strjoin.c ft_strnstr.c ft_bzero.c ft_itoa.c ft_putchar_fd.c ft_strlcat.c ft_strrchr.c ft_calloc.c ft_memccpy.c ft_putendl_fd.c ft_strlcpy.c ft_strtrim.c ft_isalnum.c ft_memchr.c ft_putnbr_fd.c ft_strlen.c ft_substr.c ft_isalpha.c ft_memcmp.c ft_putstr_fd.c ft_strmapi.c ft_tolower.c ft_isascii.c ft_memcpy.c ft_split.c ft_strncmp.c ft_toupper.c ft_isdigit.c ft_memmove.c ft_strchr.c ft_strdup.c
OBJ = $(SOURCES:.c=.o)
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc -I $(INCLUDES) -Wall -Wextra -Werror -c $(SOURCES)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all