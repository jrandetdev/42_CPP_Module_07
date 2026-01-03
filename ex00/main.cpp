#include "whatever.hpp"
#include <iostream>

int main()
{

	std::cout << "testing swap" << std::endl;
	int x = 1; int y = 2;
	std::cout << "before swap: x=" << x << " and y=" << y << std::endl;
	::swap(x, y);
	std::cout << "after swap: x=" << x << " and y=" << y << std::endl;
	std::string Hello = " Hello "; std::string World = " World ";
	std::cout << Hello << World << std::endl;
	::swap(Hello, World);
	std::cout << Hello << World << std::endl;

	// To avoid confusion with the std::max function, we use the global namespace operator.
	// outside of any blocks or namespaces
	// Ignore anything inside std:: or other namespaces and specifically look for what 
	// I defined at the top of my file. 
	std::cout << "testing max" << std::endl;
	std::cout << ::max(5, 2) << std::endl;
	std::cout << ::max(2, 2) << std::endl;
	std::cout << ::max('a', 'b') << std::endl;
	std::cout << ::max(42.1f, 43.1f) << std::endl;

	std::cout << "\ntesting min" << std::endl;
	std::cout << ::min(5, 2) << std::endl;
	std::cout << ::min(2, 2) << std::endl;
	std::cout << ::min('a', 'b') << std::endl;
	std::cout << ::min(42.1f, 43.1f) << std::endl;
}
