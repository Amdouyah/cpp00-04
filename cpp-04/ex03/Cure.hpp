#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
	public :
		Cure();
		AMateria *clone()const;
		Cure(const Cure & copy);
		Cure &operator=(const Cure & copy);
		void use(ICharacter& target);
		~Cure();
};

#endif