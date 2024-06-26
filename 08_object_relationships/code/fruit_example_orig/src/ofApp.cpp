#include "ofApp.h"


ofApp::ofApp()
: 
aFruit(),
anotherFruit("anotherFruit"),
anApple(apple::appleType::BRAEBURN),
aBanana()
{
    
    
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    aFruit.drawFruit();
    aFruit.printName();
    
    anotherFruit.drawFruit();
    anotherFruit.printName(350, 100);

    anApple.drawFruit();
    anApple.printName(350, 130);
    
    aBanana.drawFruit();
    aBanana.printName(250, 160);
    
//    aFruitPtr = &aFruit;
//    aFruitPtr->printName(350, 210);
//    aFruitPtr = &anotherFruit;
//    aFruitPtr->printName(350, 240);
//    aFruitPtr = &anApple;
//    aFruitPtr->printName(350, 270);
//    aFruitPtr = &aBanana;
//    aFruitPtr->printName(350, 300);
    
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
