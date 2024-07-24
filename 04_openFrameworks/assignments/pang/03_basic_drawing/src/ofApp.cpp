#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofSetBackgroundAuto(true);

}

//--------------------------------------------------------------
void ofApp::update(){

    for (auto &vert : line.getVertices()){
        vert.x += ofRandom(-1,1);
        vert.y += ofRandom(-1,1);
    }
    
    // Example 1 - moving simple shapes
        //xPosRect += 1;
 
}

//--------------------------------------------------------------
void ofApp::draw(){
    //drawShape();
    drawPerlinNoise();
    drawRandomLines();
    lineDraw();

    // Example 1 - simple shapes
    
    //ofBackground(250);
        //ofSetColor(255,255,0);
        //ofDrawRectangle(xPosRect, yPosRect, 200, 200);

        //ofSetColor(0,255,255);
        //ofDrawCircle(200,200, 50);

        //ofSetColor(0,0,0);
        //ofDrawLine(0,0,300,300);
    
     
    // Example 2 - random lines
    
    //ofSetColor(250,250,250);
    
     //for (int i = 0; i < 100; i++){

         //ofDrawLine( ofRandom(400,600),
                     //ofRandom(200,400),
                     //ofRandom(400,600),
                     //ofRandom(200,400) );

     //}

    
    // Example 3 - perlin noise
    
    //for (int i = 0; i < 400; i++) {

        //float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.8);
        //float add = ofSignedNoise(i*scale, ofGetElapsedTimef()*0.1) * 50;
        //ofDrawRectangle(i*5, ofGetHeight()/2 + add + 100, 2, 2);
    //}
    
    // Example 4 - noisy strokes
    //line.draw();
    
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

    ofPoint pt;
    pt.set(x,y);
    line.addVertex(pt);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    line.clear();
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
//--------------------------------------------------------------
void ofApp::drawShape() {
    ofSetColor(255,255,0);
   ofDrawRectangle(xPosRect, yPosRect, 200, 200);

   ofSetColor(0,255,255);
   ofDrawCircle(200,200, 50);

   ofSetColor(0,0,0);
   ofDrawLine(0,0,300,300);

}
//--------------------------------------------------------------
void ofApp::drawPerlinNoise() {
    ofSetColor(250, 250, 250);
    for (int i = 0; i < 400; i++) {

        float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 0.8);
        float add = ofSignedNoise(i * scale, ofGetElapsedTimef() * 0.1) * 50;
        ofDrawRectangle(i * 5, ofGetHeight() / 2 + add + 100, 2, 2);
    }
}
//--------------------------------------------------------------
void ofApp::drawRandomLines() {
    ofSetColor(250, 250, 250);

    for (int i = 0; i < 100; i++) {

        ofDrawLine(ofRandom(400, 600),
            ofRandom(200, 400),
            ofRandom(400, 600),
            ofRandom(200, 400));
    }
}
//--------------------------------------------------------------
void ofApp::lineDraw() {
    ofSetColor(250, 250, 250);
    line.draw();
}