#include "ofApp.h"
#include "of3dGraphics.h"

//--------------------------------------------------------------
void ofApp::setup(){
    r = 0;
    g = 1;
    b = 2;
}

//--------------------------------------------------------------
void ofApp::update(){
    screen.grabScreen(0,0,ofGetWidth(), ofGetHeight());
    float scale = 2;
    r += 0.01*scale;
    g += 0.012*scale;
    b += 0.015*scale;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

//    float width = ofMap(ofNoise(r), 0, 1, 0, 500);
//    float height = ofMap(ofNoise(r), 0, 1, 0, 500);
    float width = 250;
    float height = 250;

//    float circleNumber = ofMap(ofNoise(g), 0, 1, 0, 5);
    float circleNumber = 8;
    float circleNumberPoints = ofMap(ofNoise(b), 0, 1, 0, 1000);

    for (int i=1; i<circleNumber; i++) {
        for (int x=0; x<circleNumberPoints; x++) {
            ofSetColor(ofNoise(cos(r)+sin(x))*255, ofNoise(cos(g)+sin(x))*255, ofNoise(cos(b)+sin(x))*255);
            ofDrawCircle(width*cos(x)+width*cos(i), height*sin(x)+width*sin(i),3);
            ofDrawLine(width*cos(x)+width*cos(i), height*sin(x)+width*sin(i), width*cos(x+1)+width*cos(i), height*sin(x+1)+width*sin(i));
            ofDrawLine(width*cos(x)+width*cos(i), height*sin(x)+width*sin(i), width*cos(x-1)+width*cos(i), height*sin(x-1)+width*sin(i));
        }
    }

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
