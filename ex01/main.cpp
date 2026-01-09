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
	doubleArrayTest();
	return (0);
}

void	intArrayTest()
{
	std::cout << "Test 1: int array double and print" << '\n';
	int test[5] = {1, 1, 1, 1, 1};
	size_t length = sizeof(test) / sizeof(test[0]);
	::iter(test, length, doubleElement<int>);
	iter(test, length, printArrayElement<int>);
	std::cout << '\n';
}

void	stringArrayTest()
{
	std::cout << "Test 2: test with const char *test array" << '\n';
	const char *test[5] = {"hello", "world", "I", "am", "Jo"};
	size_t length = sizeof(test) / sizeof(test[0]);
	iter(test, length, printArrayElement<const char *>);
	std::cout << '\n';
}

void	doubleArrayTest()
{
	std::cout << "Test 3: test with array containing doubles" << '\n';
	double test[3] = {1.0, 2.0, 3.0};
	size_t length = sizeof(test) / sizeof(test[0]);
	iter(test, length, printArrayElement<double>);
	std::cout << '\n';
	std::cout << "doubling the elements..." << '\n';
	iter(test, length, doubleElement<double>);
	iter(test, length, printArrayElement<double>);
}
