NAME = Animal

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp Wrongcat.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re : fclean $(NAME)