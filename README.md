# 42_CPP_Module_07

# Global Goal

Discover the use of templates in C++ for classes in OOP.

---

# Templates

C++ Templates are a useful technique to create generic classes or functions and allows us to write code that works for multiple data types without repeating the same code for each type case (for example int or double inputs, one template for all)

Key features:
- avoid code duplication, great for the DRY principle
- provide type safety by avoiding
- Can be specialised for a specific data type when needed
- templates provide the basis for containers in STL (standard Template Library) which contains built in implementations of commonly used data structures known as containers. 

```cpp
template <typename T>
T max(T x, T y)
{
	return (x > y ? x : y;)
}

int main()
{

    // Using myMax
    cout << "Max of 3 and 7 is: " << myMax<int>(3, 7) << endl;
    cout << "Max of 3.5 and 7.5 is :" << myMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'g' and 'e' is: " << myMax<char>('g', 'e') << endl;
    
    return 0;
}
```

internally, the compiler will generate int myMax(int x, inty y) or char myMax(char x, char y) according to the type called.
- At Compile Time: The compiler sees you calling mymax(5, 10).
- The Realization: It says, "Oh, the user wants a version of mymax where T is an int."
- The Generation: It literally generates a hidden function in the background where every T is replaced by int.


Templates can be defined using the template keyword (used to define that the given entity is a template) and the typename keyword used to define template parameters which ar enothing btu types that will be provided when an instance is created. typename can be replaced with class at any time.

The above synthax rules can be used for three components:
- function templates
- class templates
- Variable templates 


Instead of writing the same logic over and over for int, double, and long, you write a formula once and let the compiler "copy-paste" the specific versions for you.

---

# ex00

We need to implement three function templates

swap, min, max

