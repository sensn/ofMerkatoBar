#include <iostream>

#include "ofApp.h"

void tocon();   //CALL CONSOLE 

//--SETUP------------------------------------------------------------
void ofApp::setup(){
	ofHideCursor();               // Hide the OS mouse pointer.
	ofBackground(ofColor::dodgerBlue); // Set a white background.

	// Setup the Boid. The Mouser is built in the header file.
	theBoid.setup(
		ofGetHeight() / 2,   // middle x position 
		ofGetWidth() / 2,    // middle y position
		ofColor::darkorange, // fill color
		theMouse             // the Mouser
	);
	// the font
	
	bool makeContours{ true };
	float simplifyFont{ 0.0f };
	font1.load("free3of9.ttf", 84,true, true, true,0.0f);     //BARCODE FONT in app/s...bin/data
	//font1.load("free3of9.ttf", 64, true, true, makeContours, simplifyFont);
	//font1.load("NovaMono.ttf", 64, true, true, makeContours, simplifyFont);

}

//--UPDATE------------------------------------------------------------
void ofApp::update(){
	// Update the mouse and the boid.
	theMouse.update();
	theBoid.update();

	//Call my console funktion from main
	//tocon();
}

//--DRAW------------------------------------------------------------
void ofApp::draw(){
	// Draw the mouse and the boid.
	theMouse.draw(theBoid.getLocation());
	theBoid.draw();
	

	//font1.drawStringAsShapes("OSCAR PETERSON", 200, 200); //---Nur Grossbuchstaben f�r Barcodefont!!
	font1.drawStringAsShapes(mystr, 200, 200); //---Nur Grossbuchstaben f�r Barcodefont!!
	
}
