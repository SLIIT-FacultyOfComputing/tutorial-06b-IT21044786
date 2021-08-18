#include "Box.h"
#include<iostream>
using namespace std;
int length,width,height;
// Implement setters and getters

// Implemenet the calcVolume() unction
void Box::setLength(int L) {
	length = L;
}
int Box::getLength() {
	return length;
}
void Box::setWidth(int W) {
	width = W;
}
int Box::getWidth() {
	return width;
}
void Box::setHeight(int H) {
	height = H;
}
int Box::getHeight() {
	return height;
}

int Box::calcVolume() {
	return length * width * height;
}
