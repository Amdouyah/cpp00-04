NAME = recap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Cure.cpp Ice.cpp AMateria.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re : fclean $(NAME)