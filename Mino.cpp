#include"Mino.h"

Mino::Mino(int x):maxR_I(x),R_I(0){};

Mino& Mino:: turn (){
	R_I=(R_I>=maxR_I)?0:++R_I;
	return *this;}

Mino::~Mino(){	}
