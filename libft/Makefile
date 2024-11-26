# Nome del programma
NAME = libft.a

# Compiler e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# File sorgente e oggetti
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
       ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchar.c ft_memcmp.c \
       ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
       ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
       ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)

# Regole
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "Libreria $(NAME) creata."

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Oggetti rimossi."

fclean: clean
	@rm -f $(NAME)
	@echo "Libreria $(NAME) rimossa."

re: fclean all
