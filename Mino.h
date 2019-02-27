#ifndef MINO_H
#define MINO_H
#include<iostream>
using namespace std;

class Mino{
	public:
		Mino(int x=1);
		virtual void paint()=0;
		Mino & turn();
		virtual ~Mino();
	
	protected:
		int R_I,maxR_I;
};
#endif

