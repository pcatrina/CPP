CC = clang++
CFLAGS = -Wall -Wextra -Werror
MAIN_SOURCES = megaphone.cpp

NAME = megaphone

OBJECTS = $(MAIN_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re