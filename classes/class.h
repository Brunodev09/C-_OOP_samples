/*
 * class.h
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#ifndef CLASS_H_
#define CLASS_H_


class Person {
private:
	short age = 0;
	int *p;
	static int info;
	//static variables are only created once. Without it, everytime the constructor is invoked the var is created again
public:
	Person();
	Person(short);
	~Person();
	void setAge(int);
	int getAge();
};


#endif /* CLASS_H_ */
