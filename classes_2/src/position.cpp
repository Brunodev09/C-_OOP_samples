/*
 * position.cpp
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#include <iostream>
#include "position.h"

using namespace std;



Position::Position() {
	cout << "Constructor invoked!" << endl;
	x = 0;
	y = 0;
}

Position::~Position() {
	cout << "Destructor invoked!" << endl;
}


void Position::getPos() const {
	cout << " x:" << x << " y:" << y << endl;
}

void Position::setPos(int x, int y) {
	this->x = x;
	this->y = y;
}

