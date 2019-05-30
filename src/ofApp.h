#pragma once

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"
#include "ofxCubeMap.h"

class ofApp : public ofBaseApp {

    public:
        void setup();
        void update();
        void draw();

        ofShader shader;
        ofxAssimpModelLoader model;
        ofEasyCam cam;
        ofPlanePrimitive plane;
        ofxCubeMap cubeMap;

//        ofxAssimpModelLoader yourModel;
//        ofEasyCam easycam;
//        void keyPressed(int key);
//        void keyReleased(int key);
//        void mouseMoved(int x, int y );
//        void mouseDragged(int x, int y, int button);
//        void mousePressed(int x, int y, int button);
//        void mouseReleased(int x, int y, int button);
//        void mouseEntered(int x, int y);
//        void mouseExited(int x, int y);
//        void windowResized(int w, int h);
//        void dragEvent(ofDragInfo dragInfo);
//        void gotMessage(ofMessage msg);
};
