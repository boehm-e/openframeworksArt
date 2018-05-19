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
    float radiusX = ofGetWidth()/3;
    float radiusY = ofGetWidth() / 3;
    float angle1 = ofMap(ofNoise(r), 0, 1, 5*PI/6, PI/6);
    float angle2 = ofMap(ofNoise((g+r)/2), 0, 1, PI, 0);

    ofPoint firstPendule = ofPoint(ofGetWidth()/2, 10);
    ofPoint secondPendule = ofPoint(radiusX*cos(angle1)+firstPendule.x, radiusY*sin(angle1)+firstPendule.y);
    ofPoint thirdPendule = ofPoint(radiusX*cos(angle2)+secondPendule.x, radiusY*sin(angle2)+secondPendule.y);
    ofSetColor(ofNoise(r)*255, ofNoise(g)*255, ofNoise(b)*255);
    ofDrawCircle(firstPendule, 5);
    ofDrawLine(firstPendule, secondPendule);
    ofDrawCircle(secondPendule, 5);
    ofDrawLine(secondPendule, thirdPendule);
    ofDrawCircle(thirdPendule, 5);

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
