#pragma once

#include "stdio.h"
#include "ofMain.h"
#include "ofxFontStash.h"
#include "../../../addons/
#include <set>
#include "ofUTF8.h"

struct Letter{
    char * letter_;
    int posx,posy;
};

class Sentence
{
public:
    Sentence(string str, ofxFontStash *font, int sPosX,int sPosY);
    ~Sentence();

    void update();  // update method, used to refresh your objects properties
    void draw();    // draw method, this where you'll do the object's drawing

    float yoff;

    float xPrev;
    float yPrev;
    float zPrev;

    string myString;
    int strLen;
    ofxFontStash* myFont;

    void setup(float);

    float speed;

    float yStart;

    float startShine,stopShine;

    void highLight(float,float);

    vector<string> letters;

 private: // place private functions or variables declarations here
};
