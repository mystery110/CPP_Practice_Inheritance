#include"genMino.h"

#define MINO_I 0
#define MINO_J 1
#define MINO_S 2
#define MINO_L 3
#define NUM_MINO 4

Mino* genMino(){
	int mino_type=0;
	Mino * ptr;
	mino_type = random() % NUM_MINO;
	switch(mino_type) {
		case MINO_S:
			ptr = new MinoS;
			break;
		case MINO_I:
			ptr = new MinoI;
			break;
		case  MINO_J:
			ptr=new MinoJ;
			break;
		case MINO_L:
			ptr=new MinoL;
			break;}
	return ptr;}

