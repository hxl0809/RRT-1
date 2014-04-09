/*
 * Position.cpp
 *
 *  Created on: 2014/04/03
 *      Author: Shinobu
 */



#include "Position.h"

Position Position::operator+(const Position& rhs){

	Position tmp;
	tmp.x() = this->x() + rhs.x();
	tmp.y() = this->y() + rhs.y();

	return tmp;
}

Position Position::operator-(const Position& rhs){

	Position tmp;
	tmp.x() = this->x() + rhs.x();
	tmp.y() = this->y() + rhs.y();

	return tmp;
}


Position Position::operator*(const Position& rhs){

	Position tmp;
	tmp.x() = this->x() * rhs.x();
	tmp.y() = this->y() * rhs.y();


	return tmp;
}
