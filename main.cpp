#include "RRT.h"
#include "display.h"


int main() {

	RRT rrt;

	rrt.q_init();
	rrt.RANDOMCONFIG();
	rrt.debug();

	return 0;
}
