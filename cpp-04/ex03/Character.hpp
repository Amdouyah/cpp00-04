#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		std::string name;
		int index;
		AMateria *inventory[4];
		AMateria *tmp[4];
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		Character &operator =(const Character &copy);
		~Character();
		std::string	const &getName()const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


};

#endif