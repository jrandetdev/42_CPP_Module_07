#include "Array.hpp"
#include <exception>

// Constructor definition outside class.
template <typename T> // repeat template
Array<T>::Array() : array(NULL), size(0) // when writing the scope, we need to use Array<T> not just Array
{
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()), size(n)
{
	// a constructor does not return anything, maybe thats the first step
	std::cout << "constructor called with n" << std::endl;
	std::cout << this->array << std::endl;
}

/**
 * @brief Construct a new Array< T>:: Array object
 * 
 * @tparam T 
 * @param other 
 */
template <typename T>	
Array<T>::Array(const Array<T>& other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
	{
		this->array = new T[other.size]();
		for (int i = 0; i < n; ++i)				// create a new array at a separate memory location
			this->array[i] = other->array[i];	// Copy the data from the previous array to the new one. 
		this->size = other.size;				// other.size value will be copied in a new size variable
	}
	// does not return *this because this is a copy constructor 
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete[] array;
		this->array = new T[other.size]();
		for (int i = 0; i < n; ++i)				// create a new array at a separate memory location
			this->array[i] = other->array[i];	// Copy the data from the previous array to the new one. 
		this->size = other.size;
	}
	return *this;
}

/**
 * @brief subscript operator is used here to access an element at an index i.
 * 
 * @tparam T 
 * @param i 
 * @return Array<T>& 
 * 
 * We must never access unallocated memory. 
 */
template <typename T>
Array<T>& Array<T>::operator[](int i)
{
	if (i < 0 || i >= this->size)
		throw std::out_of_range("Index i is out of range.");
	return this->array[i];
}

template <typename T>
T Array<T>::size() const
{
	return (this->size);
}
