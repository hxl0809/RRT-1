/*
 * Position.h
 *
 *  Created on: 2014/04/02
 *      Author: Shinobu
 */

#ifndef POSITION_H_
#define POSITION_H_

#include <iostream>
#include <math.h>


class Position{
public:

	Position(){}
	virtual~Position(){}

	bool operator==(const Position& rhs){
		return (mX == rhs.x()) && (mY == rhs.y());

	}

	Position operator+(const Position& rhs);
	Position operator-(const Position& rhs);
	Position operator*(const Position& rhs);


	int x() const { return mX; }
	int& x()      { return mX; }

	int y() const { return mY; }
	int& y()      { return mY; }

private:
	int mX;
	int mY;
};


#endif /* POSITION_H_ */
