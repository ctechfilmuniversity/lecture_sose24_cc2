//
//  main.cpp
//  Inheritance01
//
//  Created by abrennec on 24.06.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

#include "fruit.h"

fruit::fruit()
:
myName{"fruit"}
{
    
}

fruit::fruit(std::string theName)
:
myName{theName}
{
    
}
    
void fruit::printName()
{
    std::cout << myName << std::endl;
}
