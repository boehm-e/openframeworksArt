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

    float radius= ofNoise(b) * 4 * ofGetWidth() / 4;
    int numPoints = ofMap(ofNoise(b), 0, 1, 0, 1000);
    float angle=TWO_PI/(float)numPoints*15;


    ofSetLineWidth(5);
    for(int i=0;i<numPoints;i++) {
        float scl = 1;
        ofSetColor(ofNoise(r/scl+i) * 255, ofNoise(g/scl+i) * 255, ofNoise(b/scl+i) * 255);

//        ofDrawCircle(cos(i)*(radius-i)*ofNoise(b)*sin(angle*i),cos(i)*(radius-i)*ofNoise(b)*cos(angle*i), (int) i/10 - 50);
        ofDrawLine(ofPoint(cos(i)*(radius-i)*ofNoise(b)*sin(angle*i),cos(i)*(radius-i)*ofNoise(b)*cos(angle*i)), ofPoint(cos(i)*(radius-i)*ofNoise(b)*sin(angle*i) + i/10-30,cos(i)*(radius-i)*ofNoise(b)*cos(angle*i) + i/10-30));

        //        ofDrawLine(ofPoint(radius*sin(angle*i), radius*sin(angle*i)), ofPoint(radius*sin(angle*i-i%numPoints/2), radius*cos(angle*i-i%numPoints/2)));
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
