//
//  box.cpp
//  classes
//  Based on https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
//  Created by abrennec on 27.05.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

//#include <iostream>
#include "box.h"

Box::Box()
: length{}, breadth{}, height{}
{
    // nothing to be done
    //std::cout << " Box created " << std::endl;
}

Box::~Box()
{
    // nothing to be done
    //std::cout << " Box destroyed " << std::endl;
}
