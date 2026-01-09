#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

// careful for const and non const elemenets inside the array
template <typename T, typename F>
void iter(T *arr, size_t N, F func)
{
	for (size_t i = 0; i < N; ++i)
		func(arr[i]);
}

template <typename T>
void	printArrayElement(T &input) {
	std::cout << input << '\n';
}

// void	printArrayElement(const char * &input) {
// 	std::cout << input << '\n';
// }

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
