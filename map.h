#ifndef MAP_H_
#define MAP_H_

#include "Position.h"
#include <vector>

class map{
public:

	map(){}
	virtual~map(){}

	void SetMap();
	void ViewMap();

	std::vector<Position> mMap;

private:

	Position mnode;

};





#endif /* MAP_H_ */
