//
// Created by ake on 24/6/20.
//
//#include <conio2.h>
#include "Tablero.h"
#include <iostream>
#include "Ficha.h"
#include "stdlib.h"
#include <stdio.h>

using namespace std;

Tablero::Tablero() {}

void Tablero::setFichaIn(int x, int y, char c){
	mapa[x][y]=c;
}

void Tablero::mostrar() {
//	clrscr();
	system("clear");
	system("color 9A");
//	textcolor(12);
	cout<<"   A   B   C  "<<endl;
//	textcolor(2);
	for(int i=0;i<3;i++){
		cout<<"=============="<<endl;
//		textcolor(12);
		cout<<i+1;
//		textcolor(2);
		cout<<"| ";
		for(int j=0;j<3;j++){
//			textcolor(14);
			cout<<mapa[i][j].getFigura();
//			textcolor(2);
			cout<<" | ";
		}
		cout<<endl;
	}
	cout<<"=============="<<endl;
}

//bool Tablero::hayFicha(int x, int y) {}
//
//bool Tablero::compararFichas(int x0,int y0,int x1 ,int y1){}
//
//bool Tablero::isComplete(){}
