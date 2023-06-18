###### VARIABLE ######

NAME = serialize

SRC = main.cpp Serializer.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

%.o: %.cpp
	@echo "$(GREEN)Compiling:$(BLUE) $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

####### RULES ########

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(MAGENTA)Program: $(WHITE)$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(MAGENTA)Program name: $(WHITE)$(NAME)$(DEF_COLOR)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)Objects removed: $(WHITE)$(OBJ)$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Program removed: $(WHITE)$(NAME)$(DEF_COLOR)"

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
