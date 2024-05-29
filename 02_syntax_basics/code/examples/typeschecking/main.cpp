//
//  main.cpp
//  typeschecking
//
//  Created by abrennec on 13.05.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

#include <iostream>
#include <string>



/* ------------------------------------------------
 An enum declaration, i.e., a fixed sequence of
 constant integers variables. In this case used
 for better code comprehensibility and function
 selection.
 ------------------------------------------------ */

enum chooseFunction
{
    EXIT_LOOP = -1,
    MANY_TYPES_EXAMPLE = 1,       // = 1
    INT_TYPE_EXAMPLE,             // = 2
    REFERENCES_EXAMPLE,           // = 3
};



/* ------------------------------------------------
 Function prototypes.
 ------------------------------------------------ */

void printSizeOfManyTpyes();
void printSizeOfIntegerType();
void printExampleOfReferences();

void validateInput(int& input);



/* ------------------------------------------------
 The main function.
 ------------------------------------------------ */

int main()
{
    int userChoice = -1;
    bool isRunning = true;
    
    do
    {
        std::cout << "Please choose a function to execute by entering " << std::endl;
        std::cout << "a number between 1 and 3 or enter -1 for exiting: ";
        std::cin >> userChoice;
        
        
        // This verification ensures that the input is always of type integer.
        // If, for example, a character value is entered, the input data
        // will be cleared and any non-integer values will be removed/ignored.
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore();
        }
        
        
        switch (userChoice)
        {
            case EXIT_LOOP:
                isRunning = false;
                break;
            case MANY_TYPES_EXAMPLE:
                printSizeOfManyTpyes();
                break;
            case INT_TYPE_EXAMPLE:
                printSizeOfIntegerType();
                break;
            case REFERENCES_EXAMPLE:
                printExampleOfReferences();
                break;
            // "default" case is entered when all other cases do not apply
            default:
                std::cout << "Wrong choice. Try again or exit with -1.\n" << std::endl;
                break;
        }
    }
    while (isRunning);
   
    return 0;
}



/* ------------------------------------------------
 Function definitions.
 ------------------------------------------------ */

/* ------------------------------------------------
 printSizeOfManyTypes is a function that ...
 
 ------------------------------------------------ */

void printSizeOfManyTpyes()
{
    std::cout << " \n " << std::endl;
    std::cout << "printSizeOfManyTpyes()" << std::endl;
    
    std::cout << "Size of bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Size of char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of long long:\t" << sizeof(long long) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "Size of float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double:\t" << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Size of std::string:\t" << sizeof(std::string) << " bytes" << std::endl;

    std::cout << " \n " << std::endl;
}


/* ------------------------------------------------
 printSizeOfIntegerType is a function that ...
 
 ------------------------------------------------ */

void printSizeOfIntegerType()
{
    int x = 100;
    int& refX = x;
    int* ptrX = &refX;

    long double d = 1024.0;
    long double* ptrD = &d;
    
    std::cout << " \n " << std::endl;
    std::cout << "printSizeOfIntegerType()" << std::endl;
    
    std::cout << "Size of int:\t" << sizeof(int) << " bytes\t" << sizeof(int) * 8 << " bits\t" << std::endl;
    std::cout << "Size of int&:\t" << sizeof(int&) << " bytes\t" << sizeof(int&) * 8 << " bits\t" << std::endl;
    
    std::cout << " " << std::endl;
    
    std::cout << "Size of x:\t\t" << sizeof(x) << " bytes\t" << sizeof(x) * 8 << " bits\t Value of x:\t" << x << std::endl;
    std::cout << "Size of &x:\t\t" << sizeof(&x) << " bytes\t" << sizeof(&x) * 8 << " bits\t Value of &x:\t" << &x << std::endl;
    std::cout << "Size of refX:\t\t" << sizeof(refX) << " bytes\t" << sizeof(refX) * 8 << " bits\t Value of refX:\t" << refX << std::endl;
    std::cout << "Size of &refX:\t\t" << sizeof(&refX) << " bytes\t" << sizeof(&refX) * 8 << " bits\t Value of &refX:\t" << &refX << std::endl;
    std::cout << "Size of ptrX:\t\t" << sizeof(ptrX) << " bytes\t" << sizeof(ptrX) * 8 << " bits\t Value of ptrX:\t" << ptrX << std::endl;

    std::cout << " " << std::endl;
    
    std::cout << "Size of d:\t\t" << sizeof(d) << " bytes\t" << sizeof(d) * 8 << " bits\t Value of d:\t" << d << std::endl;
    std::cout << "Size of ptrD:\t\t" << sizeof(ptrD) << " bytes\t" << sizeof(ptrD) * 8 << " bits\t Value of ptrD:\t" << ptrD << std::endl;
}


/* ------------------------------------------------
 printExampleOfReferences is a function that ...
 
 ------------------------------------------------ */

void printExampleOfReferences()
{
    int number = 112;
    int& refNumber = number;
    
    std::cout << " \n " << std::endl;
    std::cout << "printExampleOfReferences()" << std::endl;
    
    std::cout << "Value of number:\t" << number << "\t Address of number:\t" << &number << std::endl;
    std::cout << "Value of refNumber:\t" << refNumber << "\t Address of refNumber:\t" << &refNumber << std::endl;
    
    std::cout << " " << std::endl;
    std::cout << "Changing the value of refNumber leads to ... " << std::endl;
    refNumber = 110;
    std::cout << "Value of number:\t" << refNumber << std::endl;
    std::cout << "Value of refNumber:\t" << number << std::endl;
    
    std::cout << " " << std::endl;
    std::cout << "Changing the value of number leads to ... " << std::endl;
    number = 1234;
    std::cout << "Value of number:\t" << number << std::endl;
    std::cout << "Value of refNumber:\t" << refNumber << std::endl;
    
    std::cout << " " << std::endl;
}

