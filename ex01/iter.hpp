#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

// careful for const and non const elemenets inside the array
template <typename T>
void iter(T *arr, size_t N, void (*funcPtr)(const T &arg))
{
	for (i = 0; i < N; ++i)
		funcPtr(arr[N])
}

template <typename T>
void iter(T *arr, size_t N, void (*funcPtr)(T &arg))
{
	for (i = 0; i < N; ++i)
		funcPtr(arr[N])
}

#endif


// when writing a template, you dont know yet what you will receive from the user.
// The idea is to have future proof code that adapts easily to any type of input.