#include "Brain.hpp"

Brain::Brain(){
	count = 0;
	std::cout << "Brain default Constructor Called" << std::endl;
}
Brain &Brain::operator=(const Brain &copy){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	this->count = copy.count;
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}
Brain::Brain(const Brain &copy){
	*this = copy;
	std::cout <<"Brain copy Constructor Called" << std::endl;
}
Brain::~Brain(){
	std::cout << "Brain Destructor Called" << std::endl;
}
