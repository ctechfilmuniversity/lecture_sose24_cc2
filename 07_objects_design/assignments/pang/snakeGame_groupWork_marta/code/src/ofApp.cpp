#include "ofApp.h"
#include "ofFood.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // TODO: Play with the frame rate to find a good handling.
    // Yet, think about this approach? What are the pros and cons
    // of using the frame rate and what other approach could be
    // used instead?
	ofSetFrameRate(10);
    
	ofBackground(0);

  // Load 14 PNG files
   
	foodImages = {
        "food1.png", "food2.png", "food3.png", "food4.png", "food5.png", "food6.png", "food7.png", 
		"food8.png", "food9.png", "food10.png", "food11.png", "food12.png", "food13.png", "food14.png",
		"food15.png", "food16.png", "food17.png", "food18.png"
    };

    //Load a random food image
    int randomIndex = ofRandom(foodImages.size());
    myFood.foodImage.load(foodImages[randomIndex]);
}

//--------------------------------------------------------------
void ofApp::update(){
	
	
	mySnake.updateSnake();

	if (mySnake.eat(myFood.myPos)) {
		int randomIndex = ofRandom(foodImages.size());
        myFood.foodImage.load(foodImages[randomIndex]);
		myFood.pickLocation();
        
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
    
	mySnake.drawSnake();
	myFood.drawFood();
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	switch (key) {

	case OF_KEY_LEFT: // left
		mySnake.setDir(-1, 0);
		break;
	case OF_KEY_RIGHT: // right
		mySnake.setDir(1, 0);
		break;
	case OF_KEY_UP: // up
		mySnake.setDir(0, -1);
		break;
	case OF_KEY_DOWN: // down
		mySnake.setDir(0, 1);
		break;
	}
}






