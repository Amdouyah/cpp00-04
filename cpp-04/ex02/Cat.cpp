#include "Cat.hpp"
Cat::Cat()
{
	setType("cat");
	this->brain = new Brain();
	std::cout << "Cat default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &copy){
	*this = copy;
	std::cout << "Cat copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
	if (this->brain != copy.brain)
	{
		delete this->brain;
		this->brain = new Brain();
		this->brain = copy.brain;
		this->type = copy.type;
	}
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}
Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Meao!" << std::endl;
}
