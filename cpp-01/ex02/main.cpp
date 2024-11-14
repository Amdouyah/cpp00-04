#include <iostream>
// reference is an alias for an existing object

int main(){
	std::string var =  "HI THIS IS BRAIN";
	std::string  *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << &var << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "value of var : " << var << std::endl;
	std::cout << "value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "value of stringREF : " << stringREF << std::endl;


	return 0;
}