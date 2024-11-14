#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain{
	private:
		int count;
		std::string  ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		void make(std::string std);
		~Brain();
};

#endif