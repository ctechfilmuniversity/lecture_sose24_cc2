//
//  apple.h
//  Inheritance01
//
//  Created by abrennec on 24.06.18.
//  Copyright © 2018 abrennec. All rights reserved.
//

#pragma once

#include "fruit.h"

class apple : public fruit
{
    
public:
    // declaring the appleType _before_ calling
    // it inside of the constructor
    enum appleType
    {
        BRAEBURN,
        ROYAL_GALA,
        GOLDEN_DELICIOUS
    };
    
    // specific constructor calls the base constructur
    // of fruit class and initializes the apple class with its appleType
    apple(appleType theType);
    
    
private:
    // declaring the apple default constructor as private
    // this way, we ensure that this class is never constructed using
    // the default constructur but always using the specific constructor
    // and thus by always having to define explicitely what appleType
    // the instantiated object will be of
    apple() {}
    
    appleType myType;
};
