#include "Array.hpp"
#include <exception>

// Constructor definition outside class.
template <typename T> // repeat template
Array<T>::Array() : array(NULL), sz(0) // when writing the scope, we need to use Array<T> not just Array
{
	std::cout << GREEN <<  "Default constructor called" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()), sz(n)
{
	// a constructor does not return anything, maybe thats the first step
	std::cout << GREEN << "constructor called with n = " << n << RESET << std::endl;
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
		this->array = new T[other.sz]();
		for (int i = 0; i < other.sz; ++i)				// create a new array at a separate memory location
			this->array[i] = other.array[i];	// Copy the data from the previous array to the new one. 
		this->sz = other.sz;				// other.sz value will be copied in a new sz variable
	}
	// does not return *this because this is a copy constructor 
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete[] this->array;
		this->array = new T[other.sz]();
		for (int i = 0; i < other.sz; ++i)				// create a new array at a separate memory location
			this->array[i] = other.array[i];	// Copy the data from the previous array to the new one. 
		this->sz = other.sz;
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
T& Array<T>::operator[](int i)
{
	if (i < 0 || i >= this->sz)
	{
		throw std::out_of_range("Index i is out of range.");
		exit(EXIT_FAILURE);
	}
	return this->array[i];
}

template <typename T>
int Array<T>::size() const
{
	return (this->sz);
}

template <typename T>
void	Array<T>::printArrayElements()
{
	for (int i = 0; i < sz; ++i)
		std::cout << "array[" << i << "] is worth: " << array[i] << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	if (this->array)
		delete[] this->array;
	std::cout << RED << "Destructor called" << '\n';
}
