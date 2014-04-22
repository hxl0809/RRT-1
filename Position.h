#ifndef POSITION_H_
#define POSITION_H_

#include <iostream>
#include <math.h>

class Position{
public:

	Position(){
		mX = 0;
		mY = 0;
		mnode =0;
	}

	void SetPosition(int x, int y){
		mX = x;
		mY = y;
	}

	void SetNode(int node){
		mnode = node;
	}

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

	int node() const { return mnode; }
	int& node()      { return mnode; }

private:
	int mX;
	int mY;

	int mnode;
};


#endif /* POSITION_H_ */
