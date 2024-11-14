#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << "Dog default Constructor Called" << std::endl;
}
Dog::Dog(const Dog &copy){
	*this = copy;
	std::cout << "Dog copy Constructor Called" << std::endl;
}

Dog &Dog::operator =(const Dog &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}
Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "haoww!" << std::endl;
}
