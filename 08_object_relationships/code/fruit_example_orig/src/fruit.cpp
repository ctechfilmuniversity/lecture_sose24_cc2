//
//  main.cpp
//  Inheritance01
//

#include "ofMain.h"
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
    
void fruit::printName(float x, float y)
{
//    std::cout << myName << std::endl;
    ofDrawBitmapString(myName, x, y);
}

// Use of overseas() function inside of fruit class:
//void fruit::printOrigin() {
//
//    std::cout << "FRUIT's origin is " + overseas() << std::endl;
//}

void fruit::drawFruit() {
    
    ofNoFill();
    ofSetColor(255, 155, 55);
    ofTranslate(250, 150);
    ofDrawBox(45);
}

//// Definition of overseas() function inside of fruit class:
//std::string fruit::overseas() {
//
//    return (".. I am from a land down under ..");
//}
