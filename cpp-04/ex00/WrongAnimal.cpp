#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	setType("default Wronganimal");
	std::cout << "WrongAnimal default Constructor Called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}

void WrongAnimal::setType(const std::string type){
	this->type = type;
}
std::string WrongAnimal::getType()const{
	return type;
}

void WrongAnimal::makeSound()const{
	std::cout << "Void Sound"<< std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}