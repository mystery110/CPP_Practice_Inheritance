#include <iostream>
#include <ctime>
#include<cstdlib>
#include "genMino.h"
using namespace std;
int main(){
	Mino * mino_ptr; 
	srandom(time(NULL));
	mino_ptr=new MinoL;
	mino_ptr->paint();
	delete mino_ptr;
	mino_ptr=new MinoJ;
	mino_ptr->paint();
	delete mino_ptr;
	return 0;}
