//
//  main.cpp
//

#include <iostream>
#include "add.h"



// TODO: Compile, link and build this cpp file using the Makefile (if you are on macOS). 
// Todo so, type "make" to the command line.
// Windows users please create a command line project in Visual Studio Community and 
// insert the source files.

int main()
{
    std::cout << "Hello world!\n" << std::endl ; 

    std::cout << "Add 5 + 6 \n" << add(5,6) << std::endl;

    return 0;
}
