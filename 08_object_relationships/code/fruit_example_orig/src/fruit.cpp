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



void fruit::drawFruit() {
    
    ofPushMatrix();
    ofNoFill();
    ofSetColor(255, 155, 55);
    ofTranslate(150, 250);
    ofDrawBox(45);
    ofPopMatrix();
}

