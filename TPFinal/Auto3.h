#ifndef AUTO3_H
#define AUTO3_H
#include "Auto3.h"
#include "Auto.h"


class Auto3 : public Auto{	
protected:
	int col1;
	int vel1;
public:
	int score3=0;
	Auto3(int,int,int);
	Auto3();
	void update();
	void Colision();
	int getPuntos(){return score3;};
	void setVel(int);
};
#endif
