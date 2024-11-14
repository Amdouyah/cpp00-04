#include "Animal.hpp"

Animal::Animal()
{
	setType("default animal");
	std::cout << "Animal default Constructor Called" << std::endl;
}
Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy Constructor Called" << std::endl;
}

Animal &Animal::operator =(const Animal &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}

void Animal::setType(const std::string type){
	this->type = type;
}
std::string Animal::getType()const{
	return type;
}

void Animal::makeSound()const{
	std::cout << "Void Sound"<< std::endl;
}
Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}