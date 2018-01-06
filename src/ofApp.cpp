#include "ofApp.h"
int circx = 0;
int circy = 0;
int circrad = 100;
bool display = true;
//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetColor(242, 195, 53);
    ofNoFill();
    ofSetLineWidth(3);
    ofSetCircleResolution(80);
}

//--------------------------------------------------------------
void ofApp::update(){
    circx++;
    circy++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor colorOne(217, 34, 59);
    ofColor colorTwo(22, 20, 38);
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_BAR);

    if (display) {
        ofDrawCircle(circx,circy,circrad);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if(x > circx - circrad && x < circx + circrad && y > circy - circrad && y < circy + circrad) {
        display = false;
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
