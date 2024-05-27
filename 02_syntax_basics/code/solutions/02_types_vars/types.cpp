
// Different data types used impliciteyl in Javascript.

// TODO: Figure out the counterparts in C++ and create or extend the given main_types.cpp accordingly.

// let integer = 100;
// let floatingPoint = 70.6;
// let exponential = 0.30e4;

// // Strings
// let name = 'Creative Coding';
// let message = "Double quotes work too";

// // Arrays
// let items = [1, 2, 3, 4, 5];
// let complexItems = [1, "hello world", 8.0, null, undefined, 2, 3];

// // dynamic objects
// let dog = {
//     species: "animal",
//     height: 1.2,
//     weigth: 13.3,
//     age: 10
// };


#include <iostream>
#include <string>

struct complexItems {
    int firstItem;
    std::string secItem;
    float thirdItem;
    int* fourthItem;
    // undefined does not exist in that sense but in the sense of initialization
    // 2 and 3 should be clear and will be omitted here
};

struct dog {

    std::string species = "animal";
    float height = 1.2;
    float weigth = 13.3;
    int age = 10;

    void printSpecies()
    {
        std::cout << species << std::endl;
    }

};

int main () {

    int integer = 100;
    float floatingPoint = 70.6;
    double exponential = 0.30e4;

    // Strings
    std::string name = "Creative Coding";
    char aChar = 'c';
    std::string message = "Double quotes work too";

    // Arrays
    int items[5] = {1, 2, 3, 4, 5};

    complexItems myCIs;

    // Initialization of variables strongly recommended 
    myCIs.firstItem = 5;
    std::cout << myCIs.firstItem << std::endl;  // fine
    std::cout << myCIs.fourthItem << std::endl; // this yields undefined behavior

    dog myDog;
    std::cout << myDog.age << std::endl;
    myDog.printSpecies();

    return 0;
}


/*

Since C++17, there are two new built-in types std::variant and std:any that allow to store 
more than one type. However, handling those types always requires the developer to know 
about the types they are looking for. With std::any, you need to use std::any_cast to 
retrieve the value and cast it back to its original type. With std::variant, you need to 
use std::get<type> to retrieve the value and need to know about the type you stored. 

*/