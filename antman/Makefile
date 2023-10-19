SRC = src/main.cc \
		src/getfile.cc \
		src/htmlcompression.cc \
		src/ppmcompression.cc \
		src/lyricscompression.cc

OBJ = $(SRC:.cc=.o)

NAME = antman

CXXFLAGS = -W -Wall -Wextra -Werror -std=c++11 -I./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean

re: fclean all
