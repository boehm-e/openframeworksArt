#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    r = ofRandom(5);
    g = ofRandom(5);
    b = ofRandom(5);
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
    ofTranslate(ofPoint(ofGetWidth()/2, ofGetHeight()/2));


    int numPoints = 50;
    for(int x=-numPoints;x<numPoints;x++) {
        for(int y=-numPoints;y<numPoints;y++) {
            int _x = (int) ofMap(x, 0, numPoints, 0, ofGetWidth());
            int _y = (int) ofMap(y, 0, numPoints, 0, ofGetHeight());
            ofSetColor(ofNoise(r+x+y) * 255, ofNoise(g+x+y) * 255, ofNoise(b+x+y) * 255);
            ofDrawCircle(ofNoise(cos(x)+sin(y)+g)*_x, ofNoise(sin(x)+cos(y)+b)*_y, 5);
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
