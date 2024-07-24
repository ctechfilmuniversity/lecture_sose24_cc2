#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    w =  ofGetWidth();
    h = ofGetHeight();
    
    // cirlce radius
    radius = 350;
    r = radius;
    hue = 10;
    sat = 255;
    bright = 255;
    brightPoint = 0;
    distance = 0;
    hueShift = 0;
    brightnessShift = 0;
    iterations = 9;
    // 0-9 / 0 - radius

    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    drawMagic();
    
 
}

void ofApp::drawMagic() {
    for (int i = 0; i < iterations ; i++) {
        
        
        ofColor col;
        hue += 30;
        col.setHsb(fmodf(hue, 255), sat, bright);
        ofSetColor(col);
        
        
        r = ofMap(i, 0, iterations, radius, 0 );
        std::cout << r << std::endl;
        ofDrawCircle(w/2 , h/2 , r); //start in middle, increment radius
        
    }
    r = radius;
    hue = 20 + hueShift;
    sat = 255 - (distance * 0.5);
    bright = 255 - brightnessShift;
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

    // Get the center point of the screen
    glm::vec2 center(ofGetWidth() / 2, ofGetHeight() / 2);

    // Get the current mouse position
    glm::vec2 mousePos(x, y);

    // Calculate the distance
    distance = glm::distance(center, mousePos);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

     // Get the current mouse position
    glm::vec2 mousePos(x, y);

    // Calculate the vertical distance
    brightnessShift = brightPoint - mousePos.y;

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

    // add 20 to hue
    hueShift = hueShift + 20;

    // Get the current mouse position
    glm::vec2 mousePos(x, y);
    brightPoint = mousePos.y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
