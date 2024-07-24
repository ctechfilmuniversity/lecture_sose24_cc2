#pragma once

#include "ofMain.h"
#include "ofImage.h" 

class ofFood {
    
public:

    ofFood();
    ~ofFood();

    int scl = 50;
    ofImage foodImage; //add ofImage for dealing with PNG
    ofColor color;
    ofVec2f myPos{};

    void pickLocation();
    void drawFood();



};
