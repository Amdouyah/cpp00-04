#include "Cat.hpp"
Cat::Cat()
{
	setType("cat");
	std::cout << "Cat default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy){
	*this = copy;
	std::cout << "Cat copy Constructor Called" << std::endl;
}

Cat &Cat::operator =(const Cat &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}
Cat::~Cat(){
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Meao!" << std::endl;
}
