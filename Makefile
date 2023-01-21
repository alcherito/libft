NAME 	:= libft.a
SOURCES := $(wildcard *.c)
OBJECTS := $(SOURCES:.c=.o)
CFLAGS 	:= -Wall -Wextra -Werror
CC	:= cc
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)
	
clean:
	rm -f $(NAME) $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

bonus: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)
