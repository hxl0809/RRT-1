

#include "RRT.h"

RRT::RRT(){
	//goal.SetPosition(20,20);
	t = 0;
	mthre = sqrt(2);

	mMap = new map();
	init = new Position();

	srand((unsigned int)time(NULL));

}


/*
 * ツリーGの初期化
 */
void RRT::q_init(){

	mMap->SetMap();
	init = &mMap->mMap[0];
}


void RRT::RANDOMCONFIG(){

	qrand = &mMap->mMap[(int)((rand()%400)+1)];
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

	//ノード間が移動できない場合
	else{

		//方向
		int dx = qrand->x() - qnear->x();
		int dy = qrand->y() - qnear->y();

		//第一象限
		if(dx> 0  && dy> 0){

			qnew = &mMap->mMap[0];
		}
		//第二象限
		if(dx<0  && dy> 0);
		//第三
		if(dx<0  && dy<0);
		//第四
		if(dx>0  && dy<0);
		//y軸上
		if(dx>0 && dy=0);
		if(dx<0 && dy=0);
		//x軸上

		std::cout << std::endl;
	}
}


void RRT::debug(){


	std::cout << qrand->x() << " " << qrand->y() << std::endl;
	mMap->ViewMap();


}









