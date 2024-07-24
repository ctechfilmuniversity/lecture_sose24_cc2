#pragma once

#include "ofMain.h"


class ofSnake {

public:

    ofSnake();
    ~ofSnake();

    int foo = 6;

    

    float xSpeed;
    float ySpeed;
    
    int cellSize = 50;

    ofColor colorIO;

    void updateSnake();
    void drawSnake();
    void setDir(int x, int y);
    bool eat(ofVec2f foodPos);

    ofVec2f myPos{ 0,0 };

};
