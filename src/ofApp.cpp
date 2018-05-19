#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    r = 0;
    g = 1;
    b = 2;
}

//--------------------------------------------------------------
void ofApp::update(){
    screen.grabScreen(0,0,ofGetWidth(), ofGetHeight());
    float scale = 0.2;
    r += 0.01*scale;
    g += 0.02*scale;
    b += 0.015*scale;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofPoint(ofGetWidth()/2, 0));
    int numPoints = 50;
    int height = 25;


    for (int n = 1; n<100; n++) {
        int x = ofMap(ofNoise(r+n/10) * n, 0, 100, 0, 0);
        ofPoint first = ofPoint(x, 0);
        ofPoint next = ofPoint(x, height);
        for(int i=1;i<=numPoints;i++) {
            ofSetColor(ofNoise(r*n/i) * 255, ofNoise(g*n/i) * 255, ofNoise(b*n/i) * 255);

            ofDrawLine(first, next);
            ofDrawCircle(first, 5);

            first = next;
            float angle = ofMap(ofNoise(b+i/10)*i+n, 1, numPoints, 0, PI);
            next = ofPoint(first.x - i * cos(angle), next.y+height);
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
