#ifndef OBSTACULO_H
#define OBSTACULO_H
#include "Obstaculo.h"
#include "Auto2.h"
#include "Auto.h"

class Obstaculo : public Auto2{
private:
	int recorrido=22;
public:
	Obstaculo(int,int,int);
	Obstaculo();
	void update();
	void Colision();
};

#endif
