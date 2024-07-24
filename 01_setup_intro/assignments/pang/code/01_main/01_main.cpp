//
//  main.cpp
//

// A pre-processor directive starts with "#"
// Here, the directive includes the C++ Standard Library "iostream" which
// provides functionality to input/output (IO) stream data like files,
// input values a user types into the console, etc.
#include <iostream>


// The "main" function
// Every C++ program requires a main function. The main function is called
// when the program is run and is the root for triggering all other functionality.
//
// In C++, a function requires a name, i.e., main, and can have a return value
// as well as function parameters. This function has a return value of type "int"
// and no functional parameters as indicated by the empty brackets () after "main".
// The body of a function must be encapsulated by opening { and closing }.
int main()
{
    // Inside of the function, the instructions, i.e., statements, are defined.
    // Here, the standard output stream object "std::cout"
    // (C++ standard library's namespace "std" and ostream object "cout" ('character out')
    // is called with the output operator "<<" string "Hello world!".
    // The statement produces the string to be printed to the console window.
    // The function returns 0 to indicate it was completed successfully.
    std::cout << "Hello world!\n" << std::endl ; 
    return 0;
}
