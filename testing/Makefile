###### VARIABLE ######

NAME = test

SRC = test.cpp

OBJ = $(SRC:.c=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.c
	@echo "$(GREEN)Compiling:$(BLUE) $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

####### RULES ########

all: $(NAME)

$(NAME):
	@echo -e "Program: "
	$(WHITE) $(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(DEF_COLOR)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re

###### COLORS ########

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
