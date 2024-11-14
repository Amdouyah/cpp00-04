#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	this->brain = new Brain();
	std::cout << "Dog default Constructor Called" << std::endl;
}
Dog::Dog(const Dog &copy){
	*this = copy;
	std::cout << "Dog copy Constructor Called" << std::endl;
}

Dog &Dog::operator =(const Dog &copy){
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
Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "haoww!" << std::endl;
}
