// Code originally from Zach Lieberman
// ofZach - github repository "RTP_SFPC_FALL19"
// Modifications by abrennec, 2020, for Creative Coding 2

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    angle = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    // your code goes here
    angle = ofGetElapsedTimef();

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    float xorig = 400;
    float yorig = 400;
    float radius = 200;
    float x = xorig + radius * cos(angle);
    float y = yorig + radius * sin(angle);
    
    ofDrawCircle(x,y,3);
    
    
    // TODO: What is happening here? Investigate the functions
    // and explain the following statements related to the ofPolyline "line" variable
    if (line.size() > 300){
        line.getVertices().erase(line.getVertices().begin());
    }
    line.addVertex(x,y);
    line.draw();
    
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
