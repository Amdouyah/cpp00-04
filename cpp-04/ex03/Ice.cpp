#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}
AMateria* Ice::clone()const{
	return new Ice(*this);
}
Ice::~Ice(){
}
Ice::Ice(const Ice & copy){
}
Ice &Ice::operator=(const Ice & copy){
	return *this;
}
void Ice::use(ICharacter& target){
	std::cout <<"* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}