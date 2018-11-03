/*
 * class.h
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#ifndef CLASS_H_
#define CLASS_H_

class User {
private:
	int ID;
	static int counter;
public:
	User();
	~User();
	int getID();
	static int getCounter();
//will allow main to retrieve the function without instance of class declared. Every static method or var has this property
};


#endif /* CLASS_H_ */
