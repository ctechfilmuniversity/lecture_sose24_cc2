//
//  banana.h
//  Inheritance01
//

#pragma once

#include "fruit.h"


class banana : public fruit
{
public:
    
    banana(); // default constructor
    void printName(float x, float y);
    
    void drawFruit();
    
private:
    
    std::string myName;
};

