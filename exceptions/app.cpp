/*
 * app.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: bruno
 */

#include <iostream>
#include "exception.h"

using namespace std;

class DivisionByZeroException {
public:
	void getErrorMessage() { cout << "ERROR: Do not divide by zero"; }
};

//Warning other coders to catch
double division(double a, double b) throw(DivisionByZeroException) {
	if(b==0) throw DivisionByZeroException(); //throwing and creating an object
	return a/b;
}

int main() {

	double result;

	try {
		result = division(5,0); //testing if result is 5/0
	} catch (DivisionByZeroException e) {//catching if result is 5/0
		e.getErrorMessage();

	} catch (...) {
		cout << "This is like an else statement. It will catch every other types other than int" << endl;
	}

	return 0;
}

