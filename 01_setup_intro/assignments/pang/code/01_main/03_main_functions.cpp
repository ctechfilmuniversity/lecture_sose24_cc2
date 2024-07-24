#include <iostream>
 
// This is a function declaration. It declares the function prototype. 
// A function prototype includes the function name, return type, parameter
// list and semicolon. A function declaration is a declaration statement.
// It informs the compiler about the existence of the function. 
int add(int x, int y);  

int main()
{
    // At this point, the compiler already knows about the "add"
    // function because of the "forward declaration". As a consequence
    // "add" can be used inside the main function.
    std::cout << add(4, 5) << std::endl;    
    return 0;                              
}

// This is the function definition that includes the function name, return
// type, parameter list and the function body that defines what the function
// is doing. The function body is enclosed by the braces { } that also 
// define the scope of any variable defined inside of the funtion.
int add(int x, int y)   
{
    return x + y;
}
 

