C = clang++

FLAGS = -Wall -Werror -Wextra

NAME = ex02

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(C) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@$(C) $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all