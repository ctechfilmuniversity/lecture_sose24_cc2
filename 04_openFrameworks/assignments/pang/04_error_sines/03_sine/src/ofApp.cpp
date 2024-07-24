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

    float time = ofGetElapsedTimef();
    
    ofBackground(ofMap(sin(time+2), -1, 1, 10, 200));
    
    //std::cout << time << "  " << ofGetFrameRate() << std::endl;
    
    float x = ofMap(sin(time), -1, 1, 0, ofGetWidth());
    ofDrawCircle(x,300, 20);
    x = ofMap(sin(time+1), -1, 1, 0, ofGetWidth());
    ofDrawCircle(x,400, 20);
    x = ofMap(sin(time+2), -1, 1, 0, ofGetWidth());
    ofDrawCircle(x,500, 20);
    
    
    
    
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

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
