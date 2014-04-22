#include "map.h"

void map::SetMap(){

	for(int i=1; i<21; i++){
		for(int j=1; j<21; j++){

			mnode.SetPosition(j,i);
			mnode.SetNode(-1);

			mmap.push_back(mnode);
		}
	}

}


void map::ViewMap(){

	int t=0;

	for(int i=0; i<mmap.size(); i++){

		std::cout << "(" << mmap[i].x() <<"," << mmap[i].y()
				<< ")	";
		t++;
		if(t == 20) std::cout << std::endl, std::cout << std::endl,t=0;
	}

}
