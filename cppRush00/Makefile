NAME	=	ft_retro
CLANG	=	clang++ -Wall -Wextra -Werror
SRC		=	main.cpp Enemy.cpp Engine.cpp AsciiPictures.cpp BasicCharacter.cpp LaserBeam.cpp Player.cpp AmmoPack.cpp
OBJ		=	$(SRC:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CLANG) -lncurses -o $(NAME) $(OBJ)
%.o: %.cpp
	$(CLANG) -o $@ -c $<
clean:
	rm -rf $(OBJ)
fclean:
	rm -f $(OBJ)
	rm -f $(NAME)
re: fclean all