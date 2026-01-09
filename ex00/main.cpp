#include "whatever.hpp"
#include <iostream>

int g_global;

// main that I coded
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
	std::cout << ::max<char>(48, 49) << std::endl; // here I explicitely ask the compiler to treat the input as a char
	std::cout << ::max('a', 'b') << std::endl;
	std::cout << ::max(42.1f, 43.1f) << std::endl;
	//std::cout << ::max(5.1, 3) << std::endl; this wont work. Because we dont use
	//the angle brackets to specify the type, the compiler will look for something that takes int and double
	// type comversion is not automatically done from int to double, its only done when 
	// resolving function overloads not when performing template argument deduction

	std::cout << "\ntesting min" << std::endl;
	std::cout << ::min(5, 2) << std::endl;
	std::cout << ::min(2, 2) << std::endl;
	std::cout << ::min<char>('a', 'b') << std::endl;
	std::cout << ::min(42.1f, 43.1f) << std::endl;
}

// main given by the program
// int
// main( void ) {
// 	int a = 2; 
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }
