#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <string>
#include <iostream>

#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define BLUE    "\033[34m"      /* Blue */
#define RESET   "\033[0m"		/* Reset */
#define MAG		"\033[35m"

class Dummy
{
private:
	std::string _name;
public:
	Dummy();
	Dummy(std::string &name);
	void	printName();
	~Dummy();
};

#endif
