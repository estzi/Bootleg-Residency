#include "dmxTest.h"

void dmxTest::setup(){
    dmx.connect(0);
}

void dmxTest::update(){
    oneR = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 255);
    oneG = 255 - oneR;
    oneB = ofMap(cos(ofGetElapsedTimef()), -1, 1, 0, 255);
    
    twoR = ofMap(cos(ofGetElapsedTimef()), -1, 1, 0, 255);
    twoG = 255 - twoR;
    twoB = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, 255);
    
    dmx.setLevel(1, oneR);
    dmx.setLevel(2, oneG);
    dmx.setLevel(3, oneB);
    
    dmx.setLevel(4, twoR);
    dmx.setLevel(5, twoG);
    dmx.setLevel(6, twoB);
    
    dmx.update();
    
}

void dmxTest::draw(){
    ofSetColor(oneR, oneG, oneB);
    ofRect(0, 0, ofGetWidth()/2, ofGetHeight());
    
    ofSetColor(twoR, twoG, twoB);
    ofRect(ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());

}

