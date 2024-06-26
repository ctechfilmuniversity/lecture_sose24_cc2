//
//  box.hpp
//  classes
//  Based on https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
//  Created by abrennec on 27.05.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

#ifndef box_h
#define box_h

class Box
{
    
public:
    
    Box();                        // constructor
    ~Box();                       // desctructor
    
    double length;   // Length of a box
    double breadth;  // Breadth of a box
    double height;   // Height of a box
};

#endif /* box_h */
