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
    int a = 100;
    int b = 100;
    
    {
        int a = 200;
        int b = 200;
        std::cout << "Calculation result ist: " << (a+b) << std::endl; 
    }

    std::cout << "Outer calculation result ist: " << (a+b) << std::endl; 

    return 0;
}