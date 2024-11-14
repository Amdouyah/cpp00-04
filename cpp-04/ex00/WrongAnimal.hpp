#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator =(const WrongAnimal &copy);
		virtual void setType(const std::string type);
		std::string getType()const;
		void makeSound()const;
		~WrongAnimal();
};

#endif