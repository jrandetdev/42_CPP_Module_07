#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

// careful for const and non const elemenets inside the array
template <typename T>
void iter(const T *arr, size_t N, void (*funcPtr)(const T &arg))
{
	for (size_t i = 0; i < N; ++i)
		funcPtr(arr[i]);
}

template <typename T>
void iter(T *arr, size_t N, void (*funcPtr)(T &arg))
{
	for (size_t i = 0; i < N; ++i)
		funcPtr(arr[i]);
}

template <typename T>
void	printArrayElement(const T &input) {
	std::cout << input << '\n';
}

template <typename T>
void	doubleElement(T &input){
	input += input;
	return ;
}

template <typename T>
void	increment(T &input){
	input++;
	return ;
}

#endif
