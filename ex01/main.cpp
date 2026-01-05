#include "iter.hpp"
#include <iostream>
#include <string>

void	intArrayTest();
void	stringArrayTest();
void	doubleArrayTest();

int main()
{
	intArrayTest();
	stringArrayTest();
	return (0);
}

void	intArrayTest()
{
	int test[5] = {1, 1, 1, 1, 1};
	iter(test, 2, doubleElement);
	iter(test, 5, printArrayElement);
	std::cout << '\n';
}

void	stringArrayTest()
{
	const char *test[5] = {"hello", "world", "I", "am", "Jo"};
	iter(test, 5, printArrayElement);
}

void	doubleArrayTest()
{
	double test[3] = {1.0, 2.0, 3.0};
	iter(test, 3, printArrayElement);
	iter(test, 3, doubleElement);
	iter(test, 5, printArrayElement);
}
