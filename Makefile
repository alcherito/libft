NAME 	:= libft.a

SOURCES := ft_atoi.c ft_itoa.c  ft_putendl_fd.c ft_strlcat.c ft_substr.c \
	ft_bzero.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c ft_calloc.c \
	ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c ft_isalnum.c \
	ft_memcmp.c ft_split.c ft_strmapi.c ft_isalpha.c ft_memcpy.c \
	ft_strchr.c ft_strncmp.c  ft_isascii.c ft_memmove.c ft_strdup.c \
	ft_strnstr.c ft_isdigit.c ft_memset.c ft_striteri.c ft_strrchr.c \
	ft_isprint.c ft_putchar_fd.c  ft_strjoin.c ft_strtrim.c

BSOURCES := ft_lstadd_back.c ft_lstsize.c ft_lstnew.c ft_lstadd_front.c \
	ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c

OBJECTS := $(SOURCES:.c=.o)

BOBJECTS := $(BSOURCES:.c=.o)

CFLAGS 	:= -Wall -Wextra -Werror

CC	:= cc

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)
	
clean:
	rm -f $(NAME) $(OBJECTS) $(BOBJECTS)
	
fclean: clean
	rm -f $(NAME) ${bonus}
	
re: fclean all

bonus: $(NAME) $(BOBJECTS)
	ar cr $(NAME) $(BOBJECTS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

