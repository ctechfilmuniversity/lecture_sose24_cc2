#include "ofApp.h"

bool mouseIsPressed = false;
ofRectangle rect;
int s = 100;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    rect.set(ofGetWidth()/2, ofGetHeight()/2, s, s);
}

//--------------------------------------------------------------
void ofApp::update(){
    s = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 200);
    rect.setWidth( s );
    rect.setHeight(s );
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(mouseIsPressed) {
        ofSetColor(ofColor::red);
    } else {
        ofSetColor(ofColor::white);
    }
    ofDrawRectangle(rect);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    mouseIsPressed = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    mouseIsPressed = false;
}
