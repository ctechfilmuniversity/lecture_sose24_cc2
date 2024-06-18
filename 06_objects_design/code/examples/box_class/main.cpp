//
//  main.cpp
//  classes
//  Based on https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
//  Created by abrennec on 27.05.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

#include <iostream>
#include "box.h"

int main()
{
    // insert code here...
    Box Box1;                   // Declare Box1 of type Box
    Box Box2;                   // Declare Box2 of type Box
    double volume = 0.0;        // Store the volume of a box here
    
    // box 1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;
    
    // box 2 specification
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;
    
    // volume of box 1
    volume = Box1.height * Box1.length * Box1.breadth;
    std::cout << "Volume of Box1 : " << volume << std::endl;
    
    // volume of box 2
    volume = Box2.height * Box2.length * Box2.breadth;
    std::cout << "Volume of Box2 : " << volume << std::endl;
    
    return 0;
}
