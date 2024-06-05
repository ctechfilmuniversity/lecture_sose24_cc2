#include "ofApp.h"



/**
* BASED ON Mesh Net
* https://openprocessing.org/sketch/309044
* @author aa_debdeb
* @date 2016/02/24
* Adapted for TBAG 2022 https://editor.p5js.org/abrennec/sketches/_v7-ESYb4
*/

/*

 TODO: Implement the above example with openFrameworks
 
*/

//--------------------------------------------------------------
void ofApp::setup(){

//    createCanvas(600, 600, WEBGL);
//    //pg = createGraphics(600, 600, WEBGL);
//    
//    frameRate(30);
//    background(0);
//    stroke(255, 100);
//    
//    originXOffset = width/2;
//    originYOffset = height/2;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
/*    //background(0);
    translate(-originXOffset,-originYOffset, 0);
    
    // WEBGL mode, move origin from center to topleft
    if (mouseIsPressed){
      
      let x = mouseX + map(random(1), 0, 1, -30, 30);
      let y = mouseY + map(random(1), 0, 1, -30, 30);
      let z = mouseY + map(random(1), 0, 1, -30, 30);
      let newPos = createVector(x, y, z); // create a new vector
      
      for(let i = 0; i < positions.length; i++){
        
        let pos = positions[i];
        
        if(newPos.dist(pos) < 50) {
         line(newPos.x, newPos.y, pos.x, pos.y);
        }
      }
      positions.push(newPos); // push element to the end of positions
    }
    
    noFill();
    

    // a triangle strip requires at least 3 vertices
    if ( positions.length > 3 ) {
      push();
      beginShape(TRIANGLE_STRIP);
        for(let i = 0; i < positions.length; i++){

          let pos = positions[i];

          stroke(255, 0,0,100);
          vertex(pos.x, pos.y);
        }
      endShape();
      pop();
    }
 */

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
