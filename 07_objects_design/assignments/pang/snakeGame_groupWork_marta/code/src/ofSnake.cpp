#include "ofSnake.h"



ofSnake::ofSnake() {

    xSpeed = 0;
    ySpeed = 0;

    int stage = 0;

    colorIO.set(255);
}

ofSnake::~ofSnake() {

    int test = 4;
    std::cout << "help, I will die" << std::endl;

}

void ofSnake::updateSnake() {

    myPos.x = myPos.x + xSpeed * cellSize;
    myPos.y = myPos.y + ySpeed * cellSize;

    //min-max range maped to canvas
    myPos.x = ofClamp(myPos.x, 0, ofGetWidth() - cellSize);
    myPos.y = ofClamp(myPos.y, 0, ofGetHeight() - cellSize);

}


void ofSnake::drawSnake() {

    ofSetColor(colorIO);
    ofDrawRectangle(myPos.x, myPos.y, cellSize, cellSize);
    
}


void ofSnake::setDir(int x, int y) {
    
    xSpeed = x;
    ySpeed = y;

    
}



bool ofSnake::eat(ofVec2f foodPos) {

    if (myPos.distance(foodPos) < cellSize) {
        
        std::cout << " eat !" << std::endl;

        return true;
    }

    return false;

}
