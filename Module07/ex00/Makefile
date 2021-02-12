CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = replace
SRCS =		\
main.cpp	\

all: $(NAME)

$(NAME): main.o
	$(CC) $(CFLAGS) -o $(NAME) main.o

main.o: $(SRCS) whatever.hpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re