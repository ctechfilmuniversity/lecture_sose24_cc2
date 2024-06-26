//
//  fruit.h
//  Inheritance01


#pragma once

#include <string>
#include <iostream>

class fruit
{
public:
    // constructors
    fruit();
    fruit(std::string theName);
    
    void printName(float x=350, float y=50);
    void drawFruit();
    
    
private:
    std::string myName;
};
