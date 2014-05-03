#include "RRT.h"

RRT::RRT(){
	//goal.SetPosition(20,20);
	t = 0;
	mthre = sqrt(2);

	mMap = new map();
	init = new Position();

}


/*
 * ツリーGの初期化
 */
void RRT::q_init(){

	mMap->SetMap();
	//init = ite;
}


void RRT::RANDOMCONFIG(){

	qrand->SetPosition( (int)(rand()%100)+1, (int)(rand()%100)+1);

//	std::cout << qrand.x() << "\n";
//	std::cout << qrand.y() << "\n";
}


void RRT::EXTEND(){

	//一回目は初期位置がqnear
	if(t==0){
		qnear = init;
		t++;
	}

	double length = sqrt( (qrand->y()-qnear->y()) + (qrand->x()-qnear->x()) );

	//ノード間が移動できるなら
	if(length <= mthre){

		qnew = qrand;


	}


}

void RRT::debug(){

	mMap->ViewMap();
	//mMap->mMap[0].SetPosition(3,3);

}










