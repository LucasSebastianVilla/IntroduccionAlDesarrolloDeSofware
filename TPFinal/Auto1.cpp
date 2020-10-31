#include "Auto1.h"
#include <cstdlib>
#include <conio2.h>

#include <iostream>
#include <cstdio>
#include "Auto.h"

using namespace std;
Auto1::Auto1(int vel,int y0,int col ):Auto(vel,y0,col){}
Auto1::Auto1(){}	
void Auto1::update(){
	if(kbhit()){
		int tecla = getch();
		bool mover = false;
		switch(tecla){
			case (77):{//Tecla -> Derecha
				if(x<=60){
					borrar();
					x=x+getVel();
					mover = true;
				};break;
			}
			case (75):{//Tecla <- Izquierda
				if(x>=10){
					borrar();
					x=x-getVel();
					mover = true;
				};break;
			}
			default:break;
		}
		if(mover){
			dibujar();
		}
	}
}


