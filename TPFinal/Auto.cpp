#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <ctime>
#include <iostream>
#include <cstdio>

using namespace std;
Auto::Auto(int vel,int y0, int col){
	Color = col;
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad; //cada cuanto se permite mover la pelotita 16 veces por segundo
	tempo=clock(); //inicializamos tempo con el reloj
	
	matriz[0][0]=0;  color[0][0] = 11;
	matriz[0][1]=219; color[0][1] = Color;
	matriz[0][2]=0; color[0][2] = 11;
	matriz[0][3]=219; color[0][3] = Color;
	matriz[1][0]=0;  color[1][0] = Color;
	matriz[1][1]=205; color[1][1] = 11;
	matriz[1][2]=47; color[1][2] = Color;
	matriz[1][3]=205; color[1][3] = 11;
	matriz[2][0]=30; color[2][0] = Color;
	matriz[2][1]=205; color[2][1] = 11;
	matriz[2][2]=0;  color[2][2] = Color;
	matriz[2][3]=205; color[2][3] = 11;
	matriz[3][0]=0;  color[3][0] = Color;
	matriz[3][1]=205; color[3][1] = 11;
	matriz[3][2]=92; color[3][2] = Color;
	matriz[3][3]=205; color[3][3] = 11;
	matriz[4][0]=0;  color[4][0] = 11;
	matriz[4][1]=219; color[4][1] = Color;
	matriz[4][2]=0; color[4][2] = 11;
	matriz[4][3]=219; color[4][3] = Color;
	
	ancho = 5;
	alto = 4;
	x0 = 25;
	x = x0;
	y = y0;

	dibujar();
}
Auto::Auto(){}
void Auto::dibujar(){
	for(int i=0;i<ancho;i++){
		for(int k=0;k<alto;k++){
			textcolor(color[i][k]);
			gotoxy(x+i,y+k);
			cout<<(char) matriz[i][k];
		}
	}
}
void Auto::borrar(){
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);	
			gotoxy(x+i,y+k);
			cout<<' ';
		}
	}
}
void Auto::update(){}
