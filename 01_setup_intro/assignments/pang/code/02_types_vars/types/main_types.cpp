//
//  types.cpp
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello world!\n" << std::endl ; 

    //let integer = 100 in Java, but int in C++
    int integer = 100;
    //let floatingPoint = 70.6 in Java; but float in C++
    float floatingPoint = 70.6;
    //let exponential = 0.30e4 in Java, but double in C++
    double exponential = 0.30e4;

    // Strings

    //in Java, string will be written like this - let name = 'Creative Coding'; let message = "Double quotes work too";
    std::string name = "Creative Coding";
    std::string message = "Double quotes work too";
    char singleCharacter = 'c';

    // Arrays

    //in Java, arrays can be presented like this - let items = [1, 2, 3, 4, 5];
    //let complexItems = [1, "hello world", 8.0, null, undefined, 2, 3];
    //in C++
    int items[] = { 1, 2, 3, 4, 5 };
    //for the complexItems, there are no direct conterpart. One must uses std::vector with std::variant: for heterogeneous types. 

    // Dynamic Object

struct Dog {
  std::string species;
  double height;
  double weight;
  int age;
};
    Dog dog = { "animal", 1.2, 13.3, 10 };

    return 0;
}
