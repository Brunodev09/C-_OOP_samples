/*
 * position.h
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position {
private:
	int x, y;
public:
	Position();
	~Position();
	void getPos() const; //this allows const classes instaces to access this function
	void setPos(int, int);
	friend void setX(Position &, int); //allows a func like this from main, access private section of class

};

#endif /* POSITION_H_ */
