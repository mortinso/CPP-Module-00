NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

val: all
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./phonebook

.PHONY: all clean re val