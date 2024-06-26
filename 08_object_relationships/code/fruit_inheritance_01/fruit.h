//
//  fruit.h
//  Inheritance01
//
//  Created by abrennec on 24.06.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

#pragma once

#include <iostream>

class fruit
{
public:
    // constructors
    fruit();
    fruit(std::string theName);
    
    void printName();
    
private:
    std::string myName;
};
