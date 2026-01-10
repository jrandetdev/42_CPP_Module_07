#include "Array.hpp"
#include <exception>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Dummy.hpp"

void	constArrayTest()
{
	const Array<int> constArray(3);
	std::cout << "size is worth" << constArray.size() << std::endl;
	constArray.printArrayElements();
	// constArray[0] = 1; its normal this does not work because you cannot modify a const value.
	int x = constArray[0]; // this works because we are reading only. 
	std::cout << "x is worth " << x << std::endl;
}

void	classArrayTest()
{
	Array<Dummy> dummyArray(2);
	std::string name = "Alice";
	dummyArray[0] = (Dummy(name));
	dummyArray[0].printName();
}

void	deepCopyCheck()
{
	Array<std::string> FirstArray(2);
	Array<std::string> SecondArray(FirstArray);
	FirstArray[0] = "first";
	FirstArray[1] = "first";
	SecondArray[0] = "second";
	SecondArray[1] = "second";

	std::cout << "first array should not have been modified and should display first first (deep copy)" << '\n';
	FirstArray.printArrayElements();

	std::cout << "Creating the Third array" << std::endl;
	Array<std::string> ThirdArray;
	ThirdArray = FirstArray;
	std::cout << "Third array now contains the same info as the first array (first first)" << std::endl;
	ThirdArray.printArrayElements();
	ThirdArray[0] = "third";
	std::cout << "modified the first element of the third array, now it contains:" << std::endl;
	ThirdArray.printArrayElements();
	std::cout << "first array must remain unchanged:" << std::endl;
	FirstArray.printArrayElements();
}

void	outOfBoundArrayTest()
{
	//Array<std::string>
	Array<char> CharArray(3);
	CharArray[0] = 'a';
	CharArray[1] = 'b';
	CharArray[2] = 'c';
	CharArray[3] = 'd';
}

void	stringArrayTest()
{
	Array<std::string> defaultstringArray;
	Array<std::string> stringArray(3);

	std::cout << "size of stringArray is " << stringArray.size() << std::endl;

	std::cout << "printing the default array values" << std::endl;
	stringArray.printArrayElements();
	
	std::cout << "testing with subscript operator at index 0, 1, 2, 3, and 4" << std::endl;
	stringArray[0] = "hello";
	stringArray[1] = "world";
	stringArray[2] = "goodbye";
	std::cout << "Printing the elements of the array..." << std::endl;
	stringArray.printArrayElements();
}

void	doubleArrayTest()
{
	Array<double> defaultdoubleArray;
	Array<double> doubleArray(5);

	std::cout << "size of doubleArray is " << doubleArray.size() << std::endl;

	std::cout << "printing the default array values" << std::endl;
	doubleArray.printArrayElements();
	
	std::cout << "testing with subscript operator at index 0, 1, 2, 3, and 4" << std::endl;
	doubleArray[0] = 0;
	doubleArray[1] = 1;
	doubleArray[2] = 2;
	doubleArray[3] = 3;
	doubleArray[4] = 4;
	std::cout << "Printing the elements of the array..." << std::endl;
	doubleArray.printArrayElements();
}

void	intArrayTest()
{
	Array<int> defaultIntArray;
	Array<int> IntArray(5);

	std::cout << "size of IntArray is " << IntArray.size() << std::endl;

	std::cout << "printing the default array values" << std::endl;
	IntArray.printArrayElements();

	std::cout << "testing with subscript operator at index 0, 1, 2, 3, and 4" << std::endl;
	IntArray[0] = 0;
	IntArray[1] = 1;
	IntArray[2] = 2;
	IntArray[3] = 3;
	IntArray[4] = 4;
	std::cout << "Printing the elements of the array..." << std::endl;
	IntArray.printArrayElements();
}

int main()
{
	{
		std::cout << "Test 1 intArrayTest" << '\n';
		try
		{
			intArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTest 2 doubleArrayTest" << '\n';
		try
		{
			doubleArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	{
		std::cout << "\nTest 3 stringArrayTest" << '\n';
		try
		{
			stringArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	{
		std::cout << "\nTest 3 outOfBoundArrayTest" << '\n';
		try
		{
			outOfBoundArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cout << "test success!" << std::endl;
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTest 4 doubleArrayTest" << '\n';
		try
		{
			deepCopyCheck();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTest 5 array with a class" << '\n';
		try
		{
			classArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTest 5 array with a class" << '\n';
		try
		{
			classArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTest 6 const array to test const" << '\n';
		try
		{
			constArrayTest();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
