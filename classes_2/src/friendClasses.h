/*
 * friendClasses.h
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#ifndef FRIENDCLASSES_H_
#define FRIENDCLASSES_H_


class A;//Pre declaration to avoid declaring A first than B

class B {
public:
	void setSecretValue(A &, int);
};


class A {
	friend class B; //This will allow methods inside A to change methods and variables inside B
	//A is friend with B, but B IS NOT FRIEND WITH A. Real life shit.
private:
	int secretValue = 10;
public:
	int getSecret(){return secretValue;}
};





#endif /* FRIENDCLASSES_H_ */
