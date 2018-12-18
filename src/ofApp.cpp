//
// Created by erwan on 25/11/18.
//

#include "ofApp.h"

void ofApp::setup() {
    arcore.setup();
    initialized = false;
    ofBackground(0);
    ofSetOrientation(OF_ORIENTATION_DEFAULT, false);
    this->arcore_utils = ArcoreUtils::getInstance(&arcore);
    arcore_utils->setFOV(arcore.getCameraFOV());

    apps.push_back(new App{new TestApp(), "test"});
    apps.push_back(new App{new CameraBannerApp(), "camera banner"});
    apps.push_back(new App{new TextApp(), "text banner"});
    apps.push_back(new App{new SpiraleApp(), "spirale"});
    apps.push_back(new App{new PerspectiveImage(), "perspective"});
    apps.push_back(new App{new CadreApp(), "cadre"});
    apps.push_back(new App{new DrawApp(), "drawing"});
    apps.push_back(new App{new SnakeApp(), "snake"});
    apps.push_back(new App{new PiCircleApp(), "pi circle"});
    apps.push_back(new App{new RafalleApp(), "rafalle"});

    for (int i = 0; i < apps.size(); i++) {
        App *app = apps[i];
        app->app->setupArcore(&arcore);
        app->app->setup();
    }

}

//--------------------------------------------------------------
void ofApp::update() {
    appName = getCurrentApp();

    arcore.update();
    if (!initialized && arcore.isInitialized()) {
        initialized = true;
        projectionMatrix = arcore.getProjectionMatrix(0.2f, 100.0f);
    }

    for (int i = 0; i < apps.size(); i++) {
        App *app = apps[i];
        if (app->appName == appName) {
            app->app->update();
        }
    }
}


void ofApp::setArCameraMatrices() {
    ofSetMatrixMode(OF_MATRIX_PROJECTION);
    ofLoadMatrix(projectionMatrix);
    ofSetMatrixMode(OF_MATRIX_MODELVIEW);
    ofLoadMatrix(arcore.getViewMatrix());
}

//--------------------------------------------------------------
void ofApp::draw() {
    if (initialized) {

        ofLog() << "getCurrentApp : " << getCurrentApp() << endl;

        ofEnableAlphaBlending();
        ofDisableDepthTest();
        ofSetColor(255, 255, 255);

        arcore.draw();
        ofEnableDepthTest();

        this->setArCameraMatrices();

        for (int i = 0; i < apps.size(); i++) {
            App *app = apps[i];
            if (app->appName == appName) {
                app->app->draw();
            }
        }

        ofDisableDepthTest();
    }


}

string ofApp::getCurrentApp() {
    jobject activity = ofGetOFActivityObject();
    jclass activityClass = ofGetJNIEnv()->FindClass("cc/openframeworks/OFActivity");
    jmethodID getStringMethod = ofGetJNIEnv()->GetMethodID(activityClass, "getAppName",
                                                           "()Ljava/lang/String;");
    jstring rv = (jstring) (ofGetJNIEnv()->CallObjectMethod(activity, getStringMethod));
    const char *strReturn = ofGetJNIEnv()->GetStringUTFChars(rv, 0);
    ofGetJNIEnv()->ReleaseStringUTFChars(rv, strReturn);
    return strReturn;
}

void ofApp::touchDown(int x, int y, int id) {
    ofLog() << "TOUCH DOWN" << getCurrentApp() << endl;
    for (int i = 0; i < apps.size(); i++) {
        App *app = apps[i];
        if (app->appName == appName) {
            app->app->touchDown(x, y, id);
        }
    }
}

void ofApp::touchUp(int x, int y, int id) {
    ofLog() << "TOUCH UP" << endl;
    for (int i = 0; i < apps.size(); i++) {
        App *app = apps[i];
        if (app->appName == appName) {
            app->app->touchUp(x, y, id);
        }
    }
}
