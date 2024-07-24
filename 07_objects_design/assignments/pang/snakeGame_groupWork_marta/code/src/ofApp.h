#pragma once

#include "ofMain.h"
#include "ofSnake.h"
#include "ofFood.h"


// TODO: Refactoring
// This class works but does not follow the best
// code design approach if you think of separating
// interface from implementation and access levels.
// Review all classes and improve the respective
// implementations accordingly.


class ofApp : public ofBaseApp{

	public:
	
		void setup();
		void update();
		void draw();


		void keyPressed(int key);
		
    ofSnake mySnake{};
    ofFood myFood{};

    private:
	vector<string> foodImages;  //filename of the food PNG
};
