SRC = src/main.cc

OBJ = $(SRC:.cc=.o)

NAME = giantman

CXXFLAGS = -W -Wall -Wextra -Werror -std=c++11 -I./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean

re: fclean all
