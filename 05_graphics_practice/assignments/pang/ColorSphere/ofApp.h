#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
    
//    void ofColor_::setHsb(float hue, float saturation, float brightness, float alpha);
    
    float w, h; // width and height
    float r; // circle radius
    float hue;
	float sat;
	float bright;
    float radius;
	float distance;
	float brightPoint;
	float hueShift;
	float brightnessShift;
    
    int iterations;
    
    void drawMagic();
    void drawMagicAgain();
    
    
    
		
};
