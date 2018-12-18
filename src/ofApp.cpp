#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    font.load("roboto.ttf",30);
    textMesh = font.getStringMesh("Le faux-texte est, en imprimerie, un texte",0,0);

    ofDisableArbTex();
    img.load("cat.jpg");
    img2.load("rgb.jpg");
    sphere.setRadius(200);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(mouse_down == true) {
        ofVec3f mousePoint(mouseX,mouseY,0);
        points.push_back(mousePoint);
    }
}

float x = 0;
//--------------------------------------------------------------
void ofApp::draw(){
    x+=0.00001;
    ofTranslate(50, 50);

    ofDisableArbTex();

    ofMesh mesh;

    mesh.enableColors();
    mesh.enableTextures();

    mesh.addVertex(ofVec3f(0,0,0));
    mesh.addVertex(ofVec3f(0,500,0));
    mesh.addVertex(ofVec3f(500,0,0));
    mesh.addVertex(ofVec3f(500,500,0));
    mesh.addVertex(ofVec3f(1000, 0,0));
    mesh.addVertex(ofVec3f(1000,500,0));



    if (mesh.getNumVertices() > 2) {
        for (int i = 0; i < mesh.getNumVertices() - 2; i++) {
            mesh.addIndex(i);
            mesh.addIndex(i + 1);
            mesh.addIndex(i + 2);
        }
    }
//    mesh.addTexCoord( img.getTextureReference().getCoordFromPercent(0,0) );
//    mesh.addTexCoord( img.getTextureReference().getCoordFromPercent(0,1) );
//    mesh.addTexCoord( img.getTextureReference().getCoordFromPercent(0.5,0) );
//    mesh.addTexCoord( img.getTextureReference().getCoordFromPercent(0.5,1) );
//    mesh.addTexCoord( img.getTextureReference().getCoordFromPercent(1,0) );
//    mesh.addTexCoord( img.getTextureReference().getCoordFromPercent(1,0.5) );

    img.getTextureReference().bind();
    mesh.draw();
    img.getTextureReference().unbind();
}


void ofApp::mousePressed(int x, int y, int button) {
    mouse_down = true;
}

void ofApp::mouseReleased(int x, int y, int button) {
    mouse_down = false;
}
