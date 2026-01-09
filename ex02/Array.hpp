#ifndef TEMPLATE_TPP
# define TEMPLATE_TPP

#include <iostream>
#include <cstdlib>

// here we are 
template <typename T>
class Array
{
	private:
		T *array;					// constuctor allocates the pointer, we have to store it somewhere
		size_t size;
	public:
		Array();					// construction with no parameters, creates an empty array
		Array(unsigned int n);		// Construction with an unsigned int n as param. Creates an array of n elements initialised by default
		Array(const Array& other);	
		Array& operator=(const Array& other); // Copy assignment operator, needs an existing instance. Y
		Array& operator[](int i);
		T size() const;
	};

#include "Array.tpp"

#endif
