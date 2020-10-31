#include "Juego.h"
#include <iostream>
#include <conio2.h>
#include <climits>
#include "Auto3.h"
#include "Auto1.h"
#include "Auto2.h"
#include "Auto.h"
#include <ctime>
#include "Obstaculo.h"

using namespace std;

Juego::Juego(){
	
	auto1 = new Auto1(3,50,10);
	auto2 = new Auto2 (200,30,14);
	auto3 = new Auto3(150,30,12);
	obstac= new Obstaculo(180,30,3);
}
int Juego::checkCollision(){
/** Chequeo si colisiono con otro auto **/
	int x1 = auto1->getX();
	int y1 = auto1->getY();
	int x2 = auto2->getX();
	int y2 = auto2->getY();
	int x3 = auto3->getX();
	int y3 = auto3->getY();
	int x4 = obstac->getX();
	int y4 = obstac->getY();
	int ancho= 3;
	int alto = 4;
	
	if(x1>(x2-4) && x1<(x2+4) && y1>(y2-5) && y1<(y2+5)){
		return 2;
	}
	if(x1>(x3-4) && x1<(x3+4) && y1>(y3-5) && y1<(y3+5)){
		return 3;
	}
	if(x1>(x4-4) && x1<(x4+4) && y1>(y4-5) && y1<(y4+5)){
		return 4;
	}
	return 0;
}

void Juego::play(){
/** Este metodo controla el juego, sus colisiones, cuando termina
y sus mensajes al usuario **/
	introduccion();
	gameover=true;
	pista();
	auto1->dibujar();//lo dibujo la primera vez porque el metodo introduccion lo borra
	while(gameover){
		Puntaje();
		auto1->update();
		auto2->update();
		auto3->update();	
		obstac->update();
		if(checkCollision()==2){
			auto2->Colision();
			auto2->dibujar();
			resultado(2);
			break;
		}
		if(checkCollision()==3){
			auto3->Colision();
			auto3->dibujar();
			resultado(2);
			break;
		}
		if(checkCollision()==4){
			obstac->Colision();
			//obstac->dibujar();
			resultado(2);
			break;
		}
	}
}
void Juego::Puntaje(){
/** Metodo para controlar el puntaje y la velocidad que deben tener 
los autos, tambien controlo si el jugador ha ganado, el obstaculo 
mantiene constante su velocidad **/
int score = auto2->getPuntos()+auto3->getPuntos()+obstac->getPuntos();
	switch(score){
		case 20:
			auto2->setVel(160);
			auto3->setVel(120);
			break;
		case 40:
			auto2->setVel(150);
			auto3->setVel(110);
			break;
		case 60:
			auto2->setVel(140);
			auto3->setVel(100);
			break;
		case 80:
			auto2->setVel(130);
			auto3->setVel(90);
			break;
		case 100:
			auto2->setVel(120);
			auto3->setVel(80);
			break;
		case 120:
			auto2->setVel(110);
			auto3->setVel(70);
			break;
		case 140:
			auto2->setVel(100);
			auto3->setVel(60);
			break;
		case 160:
			auto2->setVel(90);
			auto3->setVel(50);
			break;
		case 180:
			auto2->setVel(80);
			auto3->setVel(40);
			break;
		case 200:
			auto2->setVel(70);
			auto3->setVel(30);
			break;
		case 220:
			auto2->setVel(60);
			auto3->setVel(20);
			break;
		case 240:
			auto2->setVel(50);
			auto3->setVel(10);
			break;
		default:
			if(score>300){
				gameover=false;
			}else{
				break;
			}
	}
	if(gameover){
		gotoxy(30,30);
		textcolor(11);
		cout<<"PUNTAJE: "<<score;	
	}else{
		resultado(1);
	}
}
void Juego::pista(){
/**Dibujo la pista delimitando el terreno de juego**/
textcolor(9);
for (int i=30;i<=60;i++){
	gotoxy(5,i);
	cout<<"||";
	gotoxy(66,i);
	cout<<"||";
}
}
void Juego::introduccion(){
/**pantalla de presentacion**/
	clrscr();
	textcolor(5);
	cout<<"======================================================================"<<endl;
	textcolor(2);
	cout<<"####### ######  #     # ######     ######                              "<<endl;
	cout<<"   #    #     # #     # #     #    #     #   ##    ####  ###### #####  "<<endl;
	cout<<"   #    #     # #     # #     #    #     #  #  #  #    # #      #    # "<<endl;
	cout<<"   #    ######  #     # #     #    ######  #    # #      #####  #    # "<<endl;
	cout<<"   #    #        #   #  #     #    #   #   ###### #      #      #####  "<<endl;
	cout<<"   #    #         # #   #     #    #    #  #    # #    # #      #   #  "<<endl;
	cout<<"   #    #          #    ######     #     # #    #  ####  ###### #    # "<<endl;
	textcolor(5);
	cout<<"======================================================================"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	/**Instrucciones y reglas de juego**/
	textcolor(6);
	cout<<"Instrucciones:"<<endl;
	cout<<"-Utilice las teclas "; textcolor(3); cout<<"Derecha";textcolor(6); cout<<" e ";
	textcolor(3);cout<<"Izquierda";textcolor(6);cout<<" para mover el auto de carreras"<<endl;
	cout<<"-Para ganar debe esquivar los demas competidores y sortear los obstaculos"<<endl;
	cout<<"-Cada 20 puntos los autos contrarios aumentan su velocidad"<<endl;
	cout<<"-Se gana con 300 puntos, se pierde si se choca"<<endl;
	cout<<endl;
	textcolor(4);
	cout<<"Presione una tecla para empezar a correr"<<endl;
	getch();
	clrscr();
}
void Juego::resultado(int posicion){
/** Si la posicion es 1 el resulado es ganador
si la posicion es 2 el resultado es perdedor **/
	//clrscr();
	gotoxy(1,30);
	textcolor(13);
	if(posicion==1){
		cout<<" .d8888b.                                  888                  888 888 888 888"<<endl; 
		cout<<"d88P  Y88b                                 888                  888 888 888 888"<<endl; 
		cout<<"888    888                                 888                  888 888 888 888"<<endl; 
		cout<<"888         8888b.  88888b.   8888b.   .d88888  .d88b.  888d888 888 888 888 888"<<endl; 
		cout<<"888  88888     '88b 888 '88b     '88b d88' 888 d88''88b 888P'   888 888 888 888"<<endl; 
		cout<<"888    888 .d888888 888  888 .d888888 888  888 888  888 888     Y8P Y8P Y8P Y8P"<<endl; 
		cout<<"Y88b  d88P 888  888 888  888 888  888 Y88b 888 Y88..88P 888      '   '   '   ' "<<endl; 
		cout<<"'Y8888P88' 'Y888888 888  888 'Y888888  'Y88888  'Y88P'  888     888 888 888 888"<<endl; 
	}else{	
		cout<<"8888888b.                      888               888                  888 888 888"<<endl;  
		cout<<"888   Y88b                     888               888                  888 888 888"<<endl;  
		cout<<"888    888                     888               888                  888 888 888"<<endl;  
		cout<<"888   d88P .d88b.  888d888 .d88888  .d88b.   .d88888  .d88b.  888d888 888 888 888"<<endl;  
		cout<<"8888888P' d8P  Y8b 888P'  d88' 888 d8P  Y8b d88' 888 d88''88b 888P'   888 888 888"<<endl;  
		cout<<"888       88888888 888    888  888 88888888 888  888 888  888 888     Y8P Y8P Y8P"<<endl;  
		cout<<"888       Y8b.     888    Y88b 888 Y8b.     Y88b 888 Y88..88P 888      '   '   ' "<<endl;  
		cout<<"888        'Y8888  888     'Y88888  'Y8888   'Y88888  'Y88P'  888     888 888 888"<<endl;  
	}
}
	
