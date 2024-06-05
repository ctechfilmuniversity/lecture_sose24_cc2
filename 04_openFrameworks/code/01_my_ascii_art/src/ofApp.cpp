#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    // Load a font
    font.load("verdana.ttf", 12, true, true);
    
    // ASCII art to be displayed
//    asciiArt =
//        "  ____  \n"
//        " /\\' .\\    _____\n"
//        "/: \\___\\  / .  /\\ \n"
//        "\\' / . / /____/..\\ \n"
//        " \\/___/  \\'  '\\  / \n"
//        "          \\'__'\\/ \n";
    
    asciiArt =
    "\t  *****  \n"
    "\t *        * \n"
    "\t*  O O    *\n"
    "\t*   ^      *\n"
    "\t* \\___/  *\n"
    "\t *        * \n"
    "\t  *****  \n";
}

//--------------------------------------------------------------
void ofApp::update() {
    // Any logic updates can go here
}

//--------------------------------------------------------------
void ofApp::draw() {
    // Set the color for drawing the ASCII art
    ofSetColor(255, 255, 255);

    // Draw the ASCII art at the specified position
    font.drawString(asciiArt, 50, 50);
}

