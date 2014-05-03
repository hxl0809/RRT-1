#ifndef RRT_H_
#define RRT_H_

#include "map.h"
#include <stdlib.h>
#include <time.h>


class RRT{
public:

	RRT();
	virtual~RRT(){}

	void q_init();
	void RANDOMCONFIG();
	void EXTEND();



	void debug();

private:

	int G[10][10];
	int t;
	double mthre;

	map* mMap;

	Position* init;
	Position* goal;

	Position* qrand;
	Position* qnear;
	Position* qnew;

	std::vector<Position>::iterator ite ;


};

#endif

