#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor colorOne(255, 0, 0);
    ofColor colorTwo(0, 0, 255);

    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);

    for(int y = 50; y < ofGetHeight()-50; y += 20) {
        for(int x = 50; x < ofGetWidth()-50; x += 20) {
            ofSetColor(0, 0, 0);
            int s = ofMap(ofDist(x, y, ofGetMouseX(), ofGetMouseY()), 0, ofDist(0, 0, ofGetWidth()/2, ofGetHeight()/2), 20, 1);
            ofDrawRectangle(x, y, s, s);
        }
    }
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
