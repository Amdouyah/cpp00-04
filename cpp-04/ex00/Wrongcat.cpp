#include "Wrongcat.hpp"
WrongCat::WrongCat()
{
	setType("cat");
	std::cout << "WrongCat default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	*this = copy;
	std::cout << "WrongCat copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator =(const WrongCat &copy){
	this->type = copy.type;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound()const
{
	std::cout << "Meao!" << std::endl;
}