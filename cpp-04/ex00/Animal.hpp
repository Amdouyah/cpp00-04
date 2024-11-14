#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal &operator =(const Animal &copy);
		Animal(const Animal &copy);
		virtual void setType(const std::string type);
		std::string getType()const;
		virtual void makeSound()const;
		virtual ~Animal();

};

#endif