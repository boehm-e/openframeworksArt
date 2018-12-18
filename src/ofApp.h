#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
    void setup();
    void update();
    void draw();

    ofTrueTypeFont font;
    ofMesh textMesh;
    ofPolyline path;
    bool mouse_down;
    vector<ofVec3f> points;

    ofImage img, img2;
    ofFbo fbo;
    ofPixels myPixels;

    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    //    void keyReleased(int key);
    //        void keyPressed(int key);
    //            void mouseDragged(int x, int y, int button);
    //        void mouseEntered(int x, int y);
    //        void mouseExited(int x, int y);
    //        void windowResized(int w, int h);
    //        void dragEvent(ofDragInfo dragInfo);
    //        void gotMessage(ofMessage msg);

    ofSpherePrimitive sphere;
    ofPlanePrimitive plane;

    ofFbo text;

};
