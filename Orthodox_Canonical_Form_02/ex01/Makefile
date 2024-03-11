NAME = Fixed

CC = c++

SRC = *.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all