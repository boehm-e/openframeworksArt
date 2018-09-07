#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    r = 0;
    g = 1;
    b = 2;
    ofBackground(ofColor::white);
}

//--------------------------------------------------------------
void ofApp::update(){
    screen.grabScreen(0,0,ofGetWidth(), ofGetHeight());
    int scale = 4;
    r += 0.01*scale;
    g += 0.02*scale;
    b += 0.015*scale;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < 1000; i++) {
        int scale = 1000;
        ofSetColor(ofColor((ofNoise(r*i/scale)*255), (ofNoise(g*i/scale)*255), (ofNoise(b*i/scale)*255)));
        ofDrawCircle(ofNoise(r*i/scale)*ofGetWidth(),ofNoise(g*i/scale)*ofGetHeight(),ofNoise(b*i/scale)*100);
//        ofDrawRectangle(ofNoise(r*i/scale)*ofGetWidth(),ofNoise(g*i/scale)*ofGetHeight(),ofNoise(b)*100,ofNoise(b)*100);
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
