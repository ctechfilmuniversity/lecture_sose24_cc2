#include "ofApp.h"

// Define constant values with a readable name to convey their purpose
#define BOX_SIZE 10       // Size of a memory box
#define BOX_SPACING 5     // Space between boxes - 0 meaning no space
#define BOX_MAX_HEIGHT 30 // Maximum height of a box if the stored byte is 255

ofApp::ofApp(void* stackStart) {
    // We need to remember the start of the stack
    this->_stackStart = stackStart;
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);     // vertical sync the monitor
    ofSetFrameRate(30);          // 30 draws per second
    ofSetBackgroundAuto(false);  // Disable background auto clear -> we do this on our own
    
    ofEnableDepthTest();         // enable depth testing to make objects overlap based on their z-value instead of their drawing order
    
    // Position the camera in the 3D-scene
    // https://openframeworks.cc/documentation/3d/ofCamera/
    this->cam.setPosition(-80, 100, -80);
    this->cam.setOrientation(glm::vec3(0, 225, 0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // Apply calculations and manipulations required for the camera
    // to the openFrameworks state
    this->cam.begin();
    
    // Determine the current top of the stack by creating a new variable
    // on the stack and requesting it's pointer
    int x = 0;
    void* stackCurrent = &x;
    
    // Determine the stack size by substracting the current stack address
    // from the start (this works because the stack grows downwards in memory)
    // https://courses.engr.illinois.edu/cs225/fa2022/resources/stack-heap/
    size_t stackSize = (uint64)this->_stackStart - (uint64)stackCurrent;
    
    // Clear the background with full black
    ofBackground(0);
    
    // Draw the stack
    drawMemoryBlock(stackCurrent, stackSize, ofColor(0, 0, 200), ofColor(0, 255, 55));
    
    // Modify coordinate system to draw the app on the heap besides the stack
    ofScale(-1.0, 1.0);
    ofTranslate(50, 0);
    
    // Draw the memory region of our ofApp
    drawMemoryBlock(this, sizeof(ofApp), ofColor(200, 55, 55), ofColor(55, 200, 0));
    
    this->cam.end();
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

//--------------------------------------------------------------
void ofApp::drawMemoryBlock(const void* begin, size_t numBytes, const ofColor& baseColor, const ofColor& scaleColor) {
    // Determine the number of rows and columns
    float squareRoot = ceil(sqrt(numBytes * 1.0));
    
    uint8* p = (uint8*)begin;
    uint8* end = p + numBytes;
    for (int index = 0; index < squareRoot && p <= end; index++) {
        for (int zIndex = 0; zIndex < squareRoot && p <= end; zIndex++, p++) {
            float scale = *p / 255.0;
            float height = scale * BOX_MAX_HEIGHT;
            ofColor color{
                baseColor.r + scale * scaleColor.r,
                baseColor.g + scale * scaleColor.g,
                baseColor.b + scale * scaleColor.b};
            ofSetColor(color.r, color.g, color.b);
            ofDrawBox(index * (BOX_SIZE + BOX_SPACING), height / 2.0, zIndex * (BOX_SIZE + BOX_SPACING), BOX_SIZE, height, BOX_SIZE);
        }
    }
}
