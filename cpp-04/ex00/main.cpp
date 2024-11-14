#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Wrongcat.hpp"
#include "Dog.hpp"

int main(){
	// const Animal* j = new Dog();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// j->makeSound();//will output the cat sound!
	// i->makeSound();
	// meta->makeSound();
	const WrongAnimal* kitta = new WrongCat();
	const WrongAnimal* kalb = new WrongAnimal();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "---------animal-----------\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "---------wrong animal-----------\n";
	std::cout << kalb->getType() << " " << std::endl;
	std::cout << kitta->getType() << " " << std::endl;
	kalb->makeSound();
	kitta->makeSound();

	delete kalb;
	delete kitta;
	delete i;
	delete j;
	delete meta;

	return 0;
}
