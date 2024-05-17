NAME = phonebook

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

OBJ_DIR = .objs

SRCS = Contact.cpp PhoneBook.cpp main.cpp utils.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

HEADERS = Contact.hpp PhoneBook.hpp utils.hpp

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiled!"

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJ_DIR)
	@echo "Object files removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all

val: all
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./phonebook

.PHONY: all clean fclean re val