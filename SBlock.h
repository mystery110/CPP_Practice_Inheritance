#ifndef S_BLOCK_INH_H
#define S_BLOCK_INH_H
#include <iostream>
#include "IBlock.h"
using namespace std;
char S_arr [2][4][4] = {{{'0','0','0','0'},
	{'0','0','0','0'},
	{'0','0','1','1'},
	{'0','1','1','0'}},
	 {{'0','0','0','0'},
		 {'0','1','0','0'},
		 {'0','1','1','0'},
		 {'0','0','1','0'}}};

class S_Block: public I_Block{
public:
	virtual void paint() {
		for(int i=0;i<4;++i){
			for(int j=0;j<x;++j) 
				cout << ' ';
			for(int j=0;j<4;++j)
				cout << S_arr[rotate_index][i][j];
			cout << endl;}
		cout << endl;}};
#endif
