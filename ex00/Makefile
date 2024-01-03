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

.PHONY: all clean re