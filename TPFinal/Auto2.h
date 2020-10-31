#ifndef AUTO2_H
#define AUTO2_H
#include "Auto2.h"
#include "Auto.h"

class Auto2 : public Auto{
protected:
	int col1;
	int vel1;
	bool visible=true;
public:
	int score2=0;
	Auto2(int,int,int);
	Auto2();
	void update();
	void Colision();
	int getPuntos(){return score2;};
	void setVel(int);
	void setVisible(){visible=!visible;};
	bool getVisible(){return visible;};
};
#endif
