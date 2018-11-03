/*
 * class.cpp
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#include <iostream>
#include "class.h"

using namespace std;
int User::counter = 0;

User::User() {
	cout << "Constructor evoked!" << endl;
	counter++;
	ID = counter;
}

User::~User() {

}

int User::getID() {
	return ID;
}

int User::getCounter() {
	return counter;
}




