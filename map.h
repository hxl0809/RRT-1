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


private:

	Position mnode;

	std::vector<Position> mmap;






};





#endif /* MAP_H_ */
