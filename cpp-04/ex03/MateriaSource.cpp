#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* mat){
	int i = 0;
	while(this->m[i])
		i++;
	if (i > 3)
	{
		std::cout <<"cant learn this materia"<< std::endl;
		delete mat;
	}
	else{
		this->m[i] = mat;
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else{
		std::cout <<"Unknown type"<< std::endl;
		return NULL;
	}
}
MateriaSource::MateriaSource(const MateriaSource &copy){
	*this = copy;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &copy){
	if (this != &copy){
		for (int i = 0; i < 4; i++)
			delete m[i];
		for (int i = 0; i < 4; i++){
			if(copy.m[i])
				m[i] = copy.m[i];
			else
				m[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::MateriaSource(){
}
MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		delete this->m[i];
}