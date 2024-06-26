//
//  main.cpp
//  Inheritance01
//

#include "fruit.h"
#include "apple.h"
#include "banana.h"


int main()
{
    fruit aFruit;
    fruit anotherFruit("anotherFruit");
    apple anApple{apple::appleType::BRAEBURN};
    banana aBanana;
    
    aFruit.printName();
    anotherFruit.printName();
    
    anApple.printName();    // the derived classes inherit the
    aBanana.printName();    // base class function printName()
    
    return 0;
}
