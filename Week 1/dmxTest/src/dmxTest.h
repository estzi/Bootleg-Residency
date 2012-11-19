#pragma once

#include "ofMain.h"
#include "ofxDmx.h"

class dmxTest : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
        ofxDmx dmx;
    
        //fixture one
        int oneR;
        int oneG;
        int oneB;
        //fixture two
        int twoR;
        int twoG;
        int twoB;
};
