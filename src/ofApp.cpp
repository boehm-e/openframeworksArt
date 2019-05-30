#include "ofApp.h"

//--------------------------------------------------------------
#include "ofApp.h"

//--------------------------------------------------------------
ofImage img;
void ofApp::setup(){
    img.loadImage("cat.jpg");
    shader.load("shaders/reflection0.vert", "shaders/reflection0.frag");
    string file = "models/hammer.obj";

    model.disableMaterials();
    model.loadModel(file);
//    model.setScale(0.1,0.1,0.1);
//    model.setPosition(100,100,100);

    cubeMap.loadImages("cubemap1/posx.jpg",
                       "cubemap1/negx.jpg",
                       "cubemap1/posy.jpg",
                       "cubemap1/negy.jpg",
                       "cubemap1/posz.jpg",
                       "cubemap1/negz.jpg");
}

//--------------------------------------------------------------
float r = 0;
void ofApp::update(){
//        ofSetBackgroundColor(ofRandom(255));
    r+=0.01;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest();
    ofEnableAlphaBlending();

    cam.begin();

    cubeMap.bind();
    shader.begin();
    shader.setUniform1i("envMap", 0);
    shader.setUniform1f("reflectivity", 1.0);

//    model.drawFaces();
//    ofDrawSphere(50);
    ofSpherePrimitive sphere;
    sphere.set(200, 50, OF_PRIMITIVE_TRIANGLES);
    sphere.drawFaces();

    shader.end();
    cubeMap.unbind();

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
