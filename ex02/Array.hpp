#ifndef TEMPLATE_TPP
# define TEMPLATE_TPP

#include <iostream>
#include <cstdlib>

#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define BLUE    "\033[34m"      /* Blue */
#define RESET   "\033[0m"		/* Reset */
#define MAG		"\033[35m"

// here we are 
template <typename T>
class Array
{
	private:
		T 			*array;					// constuctor allocates the pointer, we have to store it somewhere
		int			sz;
	public:
		Array();					// construction with no parameters, creates an empty array
		Array(unsigned int n);		// Construction with an unsigned int n as param. Creates an array of n elements initialised by default
		Array(const Array& other);	
		Array& operator=(const Array& other); // Copy assignment operator, needs an existing instance. Y
		~Array();
		T& operator[](int i);		// careful you had put Array<T>& operator[](int i) but we are retuyrning the dereferencing so the value wihtin 
									// the array and not a reference to the class!
		const T& operator[](int i) const;
		int size() const;
		void	printArrayElements() const;
};


#include "Array.tpp"

#endif
