#include "ofApp.h"

//--------------------------------------------------------------
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    shader.load("shaders/noise.vert", "shaders/noise.frag");
    string file = "models/hammer.obj";
    model.loadModel(file, true);
    model.disableTextures();
    model.disableMaterials();
    plane.set(100,100,10,10);
    plane.setPosition(0,0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
//    ofSetBackgroundColor(255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest();
    ofEnableAlphaBlending();
    cam.begin();

    shader.begin();
    shader.setUniform4f("uMaterialColor", ofColor(255,0,0));
    model.drawFaces();
    plane.draw();
    shader.end();
    cam.end();

}














////--------------------------------------------------------------
//void ofApp::keyPressed(int key){

//}

////--------------------------------------------------------------
//void ofApp::keyReleased(int key){

//}

////--------------------------------------------------------------
//void ofApp::mouseMoved(int x, int y ){

//}

////--------------------------------------------------------------
//void ofApp::mouseDragged(int x, int y, int button){

//}

////--------------------------------------------------------------
//void ofApp::mousePressed(int x, int y, int button){

//}

////--------------------------------------------------------------
//void ofApp::mouseReleased(int x, int y, int button){

//}

////--------------------------------------------------------------
//void ofApp::mouseEntered(int x, int y){

//}

////--------------------------------------------------------------
//void ofApp::mouseExited(int x, int y){

//}

////--------------------------------------------------------------
//void ofApp::windowResized(int w, int h){

//}

////--------------------------------------------------------------
//void ofApp::gotMessage(ofMessage msg){

//}

////--------------------------------------------------------------
//void ofApp::dragEvent(ofDragInfo dragInfo){

//}
