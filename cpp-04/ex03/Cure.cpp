#include "Cure.hpp"

Cure::Cure() : AMateria("ice"){

}
AMateria* Cure::clone() const{
	return new Cure(*this);
}
Cure::~Cure(){
}
Cure &Cure::operator=(const Cure & copy){
	return *this;
}
Cure::Cure(const Cure & copy){
}
void Cure::use(ICharacter& target){
	std::cout <<"* heals " << target.getName()<< "`s wounds *" << std::endl;
}