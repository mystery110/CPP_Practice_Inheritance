#include"MinoS.h"

MinoS::MinoS():Mino(1){}
char S_arr [2][4][4] = 
{{{'0','0','0','0'},
	{'0','0','0','0'},
	{'0','0','1','1'},
	{'0','1','1','0'}},
	 {{'0','0','0','0'},
		 {'0','1','0','0'},
		 {'0','1','1','0'},
		 {'0','0','1','0'}}};


void MinoS::paint(){
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j)
			cout << S_arr[R_I][i][j];
		cout << endl;}}

//MinoS::~MinoS(){
//	delete this;}
