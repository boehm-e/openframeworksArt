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
    ofTranslate(ofPoint(ofGetWidth()/2, ofGetHeight()/2));

    float radius= ofGetWidth() / 4;
    int numPoints= (int)ofMap(ofNoise(r+g+b), 0, 1, 0, 500);
    float angle=TWO_PI/(float)numPoints;
    int numwave = 50;
    for(int i=-numPoints;i<numPoints;i++) {
        ofSetColor(ofNoise(r+i) * 255, ofNoise(g+i) * 255, ofNoise(b+i) * 255);
        ofDrawCircle(2*i,radius*cos(angle*i*numwave)/5+ofNoise(abs(i)*r)*50, 5);
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
