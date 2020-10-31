#include "Auto2.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto.h"

using namespace std;
Auto2::Auto2(int vel,int y0, int col):Auto(vel,y0,col){
	x0=11+(rand()%50);
	x=x0;
	vel1=vel;
	col1=col;
}
Auto2::Auto2(){}
void Auto2::update(){
	if(tempo+vel1<clock()){
		borrar();
		y=y+1;
		dibujar();
		if(y==52){
			score2++;
			matriz[0][0]=0;  color[0][0] = 8;
			matriz[0][1]=219; color[0][1] = col1;
			matriz[0][2]=0; color[0][2] = 8;
			matriz[0][3]=219; color[0][3] = col1;
			matriz[1][0]=0;  color[1][0] =col1;
			matriz[1][1]=205; color[1][1] = 11;
			matriz[1][2]=47; color[1][2] = col1;
			matriz[1][3]=205; color[1][3] = 11;
			matriz[2][0]=30; color[2][0] = col1;
			matriz[2][1]=205; color[2][1] = 11;
			matriz[2][2]=0;  color[2][2] = col1;
			matriz[2][3]=205; color[2][3] = 11;
			matriz[3][0]=0;  color[3][0] = col1;
			matriz[3][1]=205; color[3][1] = 11;
			matriz[3][2]=92; color[3][2] = col1;
			matriz[3][3]=205; color[3][3] = 11;
			matriz[4][0]=0;  color[4][0] = 8;
			matriz[4][1]=219; color[4][1] = col1;
			matriz[4][2]=0; color[4][2] = 8;
			matriz[4][3]=219; color[4][3] = col1;
			
			borrar();
			
			y=30;
			x=11+(rand()%50);
			dibujar();
		}
		tempo = clock();
	}
}
void Auto2::Colision(){
	bool Colision = true;
	if(Colision){
		matriz[4][0]=219;  color[4][0] = col1;
		matriz[4][1]=0; color[4][1] = 11;
		matriz[4][2]=219; color[4][2] = col1;
		matriz[4][3]=0; color[4][3] = 11;
		matriz[3][0]=205;  color[1][0] = 11;
		matriz[3][1]=47; color[1][1] = col1;
		matriz[3][2]=205; color[1][2] = 11;
		matriz[3][3]=0; color[1][3] = 11;
		matriz[2][0]=205; color[2][0] = 11;
		matriz[2][1]=0; color[2][1] = col1;
		matriz[2][2]=205;  color[2][2] = 11;
		matriz[2][3]=31; color[2][3] = col1;
		matriz[1][0]=205;  color[3][0] = 11;
		matriz[1][1]=92; color[3][1] = col1;
		matriz[1][2]=205; color[3][2] = 11;
		matriz[1][3]=0; color[3][3] = 11;
		matriz[0][0]=219;  color[0][0] = col1;
		matriz[0][1]=0; color[0][1] = 11;
		matriz[0][2]=219; color[0][2] = col1;
		matriz[0][3]=0; color[0][3] = 11;
	}else{
		matriz[0][0]=0;  color[0][0] = 11;
		matriz[0][1]=219; color[0][1] = col1;
		matriz[0][2]=0; color[0][2] = 11;
		matriz[0][3]=219; color[0][3] = col1;
		matriz[1][0]=0;  color[1][0] = col1;
		matriz[1][1]=205; color[1][1] = 11;
		matriz[1][2]=47; color[1][2] = col1;
		matriz[1][3]=205; color[1][3] = 11;
		matriz[2][0]=30; color[2][0] = col1;
		matriz[2][1]=205; color[2][1] = 11;
		matriz[2][2]=0;  color[2][2] = col1;
		matriz[2][3]=205; color[2][3] = 11;
		matriz[3][0]=0;  color[3][0] = col1;
		matriz[3][1]=205; color[3][1] = 11;
		matriz[3][2]=92; color[3][2] = col1;
		matriz[3][3]=205; color[3][3] = 11;
		matriz[4][0]=0;  color[4][0] = 11;
		matriz[4][1]=219; color[4][1] = col1;
		matriz[4][2]=0; color[4][2] = 11;
		matriz[4][3]=219; color[4][3] = col1;
	}
	Colision = !Colision;
}
void Auto2::setVel(int vel2){
	vel1=vel2;
}
