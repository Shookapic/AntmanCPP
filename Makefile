SRC = main.cc

OBJ = $(SRC:.cc=.o)

NAME = Antman

CFLAGS = -W -Wall -Wextra -Werror -I./include -Wpedantic -std=c++17

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
