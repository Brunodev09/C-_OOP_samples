/*
 * farm.h
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */

#ifndef FARM_H_
#define FARM_H_
#include <iostream>

using namespace std;

class Animal {
protected:
	string voice;
public:
	Animal();
	virtual ~Animal(); //Needs to make this abstract to be able to free memory
	virtual string getVoice() = 0; //virtual property warns the compiler about other methods like this
	//= 0 makes the class abstract! So you can't create objects of it
};

class Dog: public Animal {
protected:
	string ID;
public:
	Dog();
	~Dog();
	 string getVoice();
};

class Cat: public Animal {
protected:
	string ID;
public:
	Cat();
	~Cat();
	 string getVoice();
};

class Cow: public Animal {
protected:
	string ID;
public:
	Cow();
	~Cow();
	 string getVoice();
};

#endif /* FARM_H_ */
