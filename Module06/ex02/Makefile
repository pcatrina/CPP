CC = clang++
CFLAGS = -Wall -Wextra -Werror
MAIN_SOURCES =	main.cpp

NAME = identify

OBJECTS = $(MAIN_SOURCES:.c=.o)

all: $(MAIN_SOURCES) $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
#-o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re