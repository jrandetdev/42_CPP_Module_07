#include "Dummy.hpp"

Dummy::Dummy() : _name("")
{
	std::cout << MAG << "Default constructor called for dummy class" << RESET << std::endl;
}

Dummy::Dummy(std::string &name) : _name(name)
{
	std::cout << MAG << "Constructor called with name for dummy class" << RESET << std::endl;
}

void	Dummy::printName()
{
	std::cout << "dummy class name is " <<  _name << std::endl;
}

Dummy::~Dummy()
{
	std::cout << BLUE << "Default destructor called for dummy class" << RESET << std::endl;
}
