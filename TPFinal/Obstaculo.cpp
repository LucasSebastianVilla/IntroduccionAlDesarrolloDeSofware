#include "Obstaculo.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto2.h"

using namespace std;
Obstaculo::Obstaculo(int vel,int y0, int col):Auto2(vel,y0,col){
/** creo un obstaculo en base al auto 2 pero con otra forma **/
	Color = col;
	paso=CLOCKS_PER_SEC/vel; 
	tempo=clock(); //inicializamos tempo con el reloj
	
	matriz[0][0]=201; color[0][0] = Color;
	matriz[0][1]=186; color[0][1] = Color;
	matriz[0][2]=186; color[0][2] = Color;
	matriz[0][3]=200; color[0][3] = Color;
	matriz[1][0]=205; color[1][0] = Color;
	matriz[1][1]=177; color[1][1] = Color;
	matriz[1][2]=177; color[1][2] = Color;
	matriz[1][3]=205; color[1][3] = Color;
	matriz[2][0]=205; color[2][0] = Color;
	matriz[2][1]=177; color[2][1] = Color;
	matriz[2][2]=177; color[2][2] = Color;
	matriz[2][3]=205; color[2][3] = Color;
	matriz[3][0]=187; color[3][0] = Color;
	matriz[3][1]=186; color[3][1] = Color;
	matriz[3][2]=186; color[3][2] = Color;
	matriz[3][3]=188; color[3][3] = Color;
	
	ancho = 4;
	alto = 4;
	x = 25;
	y = y0;
	dibujar();
}
Obstaculo::Obstaculo(){}
void Obstaculo::update(){
	if(tempo+vel1<clock()){
		borrar();
		y=y+1;//voy bajando de a 1 posicion
		if(visible){dibujar();}
		if(y==52){//si llego hasta abajo sumo 1 punto
			score2++;
			matriz[0][0]=201; color[0][0] = Color;
			matriz[0][1]=186; color[0][1] = Color;
			matriz[0][2]=186; color[0][2] = Color;
			matriz[0][3]=200; color[0][3] = Color;
			matriz[1][0]=205; color[1][0] = Color;
			matriz[1][1]=177; color[1][1] = Color;
			matriz[1][2]=177; color[1][2] = Color;
			matriz[1][3]=205; color[1][3] = Color;
			matriz[2][0]=205; color[2][0] = Color;
			matriz[2][1]=177; color[2][1] = Color;
			matriz[2][2]=177; color[2][2] = Color;
			matriz[2][3]=205; color[2][3] = Color;
			matriz[3][0]=187; color[3][0] = Color;
			matriz[3][1]=186; color[3][1] = Color;
			matriz[3][2]=186; color[3][2] = Color;
			matriz[3][3]=188; color[3][3] = Color;
			
			borrar();
			//setVisible();//cambio el estado de visibilidad
			y=30;//lo llevo arriba otra vez
			x=11+(rand()%30);//lo saco en una posicion aleatoria
			if(visible){dibujar();}
		}
		tempo = clock();
	}

}
