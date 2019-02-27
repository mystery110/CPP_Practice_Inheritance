main:main.o genMino.o Mino.o MinoI.o MinoS.o MinoL.o MinoJ.o
	g++ -o main main.o genMino.o MinoI.o Mino.o MinoJ.o MinoL.o MinoS.o

Mino.o:Mino.h Mino.cpp
	g++ -c Mino.cpp

MinoI.o:Mino.h MinoI.h MinoI.cpp
	g++ -c MinoI.cpp

MinoJ.o:Mino.h MinoJ.h MinoJ.cpp
	g++ -c MinoJ.cpp

MinoL.o:Mino.h MinoL.h MinoL.cpp
	g++ -c MinoL.cpp

MinoS.o:Mino.h MinoS.h MinoS.cpp
	g++ -c MinoS.cpp

genMino.o:genMino.cpp genMino.h MinoI.h Mino.h MinoJ.h MinoL.h MinoS.h
	g++ -c genMino.cpp

main.o:main.cpp genMino.h MinoI.h Mino.h MinoJ.h MinoL.h MinoS.h
	g++ -c main.cpp

clean:
	rm -r *.o
