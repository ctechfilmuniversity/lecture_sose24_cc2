//
//  banana.cpp
//  Inheritance01
//

#include "ofMain.h"
#include "banana.h"


banana::banana()
:
fruit("banana"),
myName{"specificBanana"}
{
    
}

void banana::drawFruit() {
    
    ofPushMatrix();
    ofTranslate(350,250);
    ofSetColor(255,255,0);
    ofDrawSphere(45);
    ofPopMatrix();
}



void banana::printName(float x, float y)
{
//    std::cout << myName << std::endl;
    ofDrawBitmapString(myName, x, y);
}
