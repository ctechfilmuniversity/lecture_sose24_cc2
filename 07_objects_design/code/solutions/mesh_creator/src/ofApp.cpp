#include "ofApp.h"
#include <iostream>


/**
* BASED ON Mesh Net
* https://openprocessing.org/sketch/309044
* @author aa_debdeb
* @date 2016/02/24
* Adapted for TBAG 2022
*/
/*

    TODO: Learning
 
This example touches upon several drawing topics that you can
explore and learn about:
 - double buffering
    checkout the main function and comment the doubleBuffering
    setting to see the effect; what is happening?
 - frame rate and draw function
    slow down the frame rate and see what kind of effect this
    has on the drawing behaviour; what is happening?
 - drawing stuff vs custom shapes
    review the code in the draw function carefully and uncomment
    the second part on OpenGL shapes; what is happening?
    exchange "ofVertex" with "ofCurvedVertext"; what is happening?
*/

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetBackgroundAuto(false);
    ofSetVerticalSync(true); // Enable vertical sync

    ofSetFrameRate(60);
    ofBackground(0);
    ofSetLineWidth(2.0);
    ofSetColor(255, 100);

    originXOffset = ofGetWidth() / 2;
    originYOffset = ofGetHeight() / 2;
}

//--------------------------------------------------------------
void ofApp::update(){

    GLenum err;
    while ((err = glGetError()) != GL_NO_ERROR) {
        ofLogError() << "OpenGL Error: " << err;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
        

    if (ofGetMousePressed()) {
        ofSetColor(255, 255, 255, 100);
        float x = ofGetMouseX() + ofMap(ofRandom(1), 0, 1, -30, 30);
        float y = ofGetMouseY() + ofMap(ofRandom(1), 0, 1, -30, 30);
        float z = ofGetMouseY() + ofMap(ofRandom(1), 0, 1, -30, 30);
        ofVec3f newPos{x, y, z};

        for (auto &pos : positions) {
            if (newPos.distance(pos) < 50) {
                ofDrawLine(newPos.x, newPos.y, pos.x, pos.y);
            }
        }
        positions.push_back(newPos);
    }
    
//  Shapes part
//
//    if (positions.size() > 3) {
//        ofPushMatrix();
//        ofNoFill();
//        ofBeginShape();
//        for (auto &pos : positions) {
//            ofSetColor(255, 0, 0, 100);
//            ofVertex(pos.x, pos.y);
//            //ofCurveVertex(pos.x, pos.y);
//        }
//        ofEndShape(false);
//        ofPopMatrix();
//    }
    
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
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
