/*
 * copy.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: bruno
 */

#include <iostream>
#include "copy.h"
#include "integer.h"

using namespace std;

Copy::Copy(int x, int y, int value) {
	this->x = x;
	this->y = y;
	this->p = new int(value);
	//use [] to define an array of data types, use () to define only ONE.
	//In this ex, we are separating only ONE INT with 'value'*4 bytes
}

Copy::Copy(const Copy &object) {
	this->p = new int(*(object.p));
	this->x = object.x;
	this->y = object.y;
}

Copy::~Copy() {
	delete p; //not using [] because p is not an array in this case
}




