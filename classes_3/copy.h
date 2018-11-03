/*
 * copy.h
 *
 *  Created on: Sep 30, 2018
 *      Author: bruno
 */

#ifndef COPY_H_
#define COPY_H_

class Copy {
public:
	int x, y;
	int *p;
	Copy(int, int, int);
	Copy(const Copy &);//This is the copy constructor
	~Copy();
};



#endif /* COPY_H_ */
