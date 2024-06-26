//
//  apple.cpp
//  Inheritance01
//

#include "apple.h"


apple::apple(appleType theType)
:
fruit("apple"),     // calling the base class constructor
myType(theType)     // initializing the class data members
{
    // nothing to be done
}
