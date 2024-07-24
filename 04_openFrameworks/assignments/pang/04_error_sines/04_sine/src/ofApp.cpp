// Code originally from Zach Lieberman
// ofZach - github repository "RTP_SFPC_FALL19"
// Modifications by abrennec, 2020, for Creative Coding 2


#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    float time = ofGetElapsedTimef();
    
    float amp = ofMap(sin(time*3.7), -1, 1, 0, 1);
    
    float x = ofMap(sin(time*3)*amp, -1, 1, 0, ofGetWidth());
    
    ofDrawCircle(x, 400, 10);
    
    
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}


