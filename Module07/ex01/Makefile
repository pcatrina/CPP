CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = iter
INCL = 		\
iter.hpp
SRCS =		\
main.cpp	\

all: $(NAME)

$(NAME): main.o
	$(CC) $(CFLAGS) -o $(NAME) main.o

main.o: $(SRCS) $(INCL)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re