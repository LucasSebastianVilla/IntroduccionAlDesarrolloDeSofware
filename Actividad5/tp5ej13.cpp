#include <iostream>
#include<conio2.h>
using namespace std;
int mazo[4][10];
int tecla,fila,columna;
double suma1,suma2;
bool control=true,control2=true,control3=true,control4=true,sigue=true;
string palo;
char tec;

int main(int argc, char *argv[]) {
	do{//while que permite jugar indefinidamente
		//mensaje de presentacion del juego
		cout<<"-------------------------Bienvenidos al juego 7 y 1/2-------------------------"<<endl; 
		cout<<"El objetivo es acercarse a 7 y medio sin pasarse.Cada carta vale su valor, las  figuras valen 1/2."<<endl;
		cout<<"------------------------------------------------------------------------------"<<endl;
		srand(time(0));	
		//creo el mazo en un arreglo de 4x10
		cout<<"::::::::::::::MAZO::::::::::::::::"<<endl;
		for (int i=0;i<4;i++){ //cada fila es el palo
			for (int j=0;j<10;j++){//cada columna es el nro de carta
				if (j+1<8){
					mazo[i][j]=j+1;
				}else{
					mazo[i][j]=j+3;
				}
				cout<<mazo[i][j]<<" "; //muestro el mazo inicialmente
			}
			//para una mejor visualizacion, muestro palos en cada fila
			switch(i){
				case 0:	cout<<"- Espadas"<<endl;break;
				case 1:	cout<<"- Bastos"<<endl;break;
				case 2:	cout<<"- Copas"<<endl;break;
				case 3:	cout<<"- Oros"<<endl;break;
			}
		}
		//jugada del usuario
		cout<<"======================================================="<<endl;
		cout<<"======================JUEGA USTED======================"<<endl;
		cout<<"======================================================="<<endl;
		do{
			cout<<"Presione la tecla <ENTER> para recibir una carta: "<<endl;
			do{
				tecla=getch();
				if (tecla==10){
					//genero al azar nros de filas y columnas y controlo que la carta este en el mazo
					do{
						fila=rand() % 3 + 1;
						columna=rand() % 9 + 1;
						//cout<<fila<<" "<<columna<<endl;- Linea usada para control de variables
					}while(mazo[fila][columna]==0); //repito hasta que la celda no sea cero
					switch(fila){//le añado el palo de cada carta
						case 0: palo=" de espada";break;
						case 1: palo=" de basto";break;
						case 2: palo=" de copa";break;
						case 3: palo=" de oro";break;
					}
					//muestro que carta saca
					cout<<"Usted recibe la carta "<<mazo[fila][columna]<<palo<<endl;
					if (mazo[fila][columna]>7){//hago que las figuras valgan 0.5, sino sumo su valor nominal
						suma1=suma1+0.5;
					}else{
						suma1=suma1+mazo[fila][columna];
					}
					mazo[fila][columna]=0;//marco la carta como usada
					cout<<"Lleva acumulado "<<suma1<<" puntos."<<endl;//voy acumulando para controlar cuantos puntos lleva
					//vuelvo a mostrar el mazo con las cartas que no estan disponibles
					cout<<"::::::::::::::MAZO::::::::::::::::"<<endl;
					for (int i=0;i<4;i++){
						for (int j=0;j<10;j++){
							cout<<mazo[i][j]<<" ";
						}
						switch(i){
							case 0: cout<<"- Espadas"<<endl;break;
							case 1:	cout<<"- Bastos"<<endl;break;
							case 2:	cout<<"- Copas"<<endl;break;
							case 3:	cout<<"- Oros"<<endl;break;
						}
					}
					cout<<"-------------------------------------"<<endl;
					if (suma1>7.5){//controlo si perdio al sacar cartas demas o si quiere sacar mas cartas
						cout<<"================================="<<endl;
						cout<<"===La computadora ha ganado!!!==="<<endl;
						cout<<"================================="<<endl;
						control4=false;//uso este control para escapar de la jugada de la computadora
						sigue=false;//pongo en falso este control para que me permita salir del while de la jugada
					}else{
						cout<<"¿Desea recibir otra carta? (S/N)"<<endl;//pregunto si quiere mas cartas para continuar barajando
						do{
							tec=getch();
							if(tec=='S'||tec=='s'){
								sigue=true;
								control2=false;//uso este control para obligar al usuario a usar S o N
							}else if(tec=='N'||tec=='n'){
								sigue=false;
								control2=false;
							}else{
								cout<<"Debe indicar si quiere otra carta (S/N)"<<endl;
								control2=true;
							}
						}while(control2);
					}
					control3=false;//este control es para repetir el bucle en caso de que no se presione enter
				}else{
					cout<<"No ha presionado la tecla correcta."<<endl;
					cout<<"Presione la tecla <ENTER> para recibir una carta: "<<endl;
					control=true;
					control3=true;
				}
			} while(control3);
			if(sigue){//consulto si quiere seguir jugando
				control=true;
			}else{
				control=false;
			}
		}while(control);
		
		//juega la computadora
		if(control4){//si ya perdio sacando cartas, no se necesita ejecutar este do while
			cout<<"======================================================="<<endl;
			cout<<"================JUGADA DE LA COMPUTADORA==============="<<endl;
			cout<<"======================================================="<<endl;
			do{
				do{
					fila=rand() % 3 + 1;
					columna=rand() % 9 + 1;
					//cout<<fila<<" "<<columna<<endl; - Linea usada para control de variables
				} while(mazo[fila][columna]==0);
				switch(fila){//le añado el palo de cada carta
					case 0: palo=" de espada";break;
					case 1: palo=" de basto";break;
					case 2: palo=" de copa";break;
					case 3: palo=" de oro";break;
				}
				//muestro que carta saca y que palo tiene si es que no la saco antes
				cout<<"La computadora recibe la carta "<<mazo[fila][columna]<<palo<<endl;
				if (mazo[fila][columna]>7){//hago que las figuras valgan 0.5, sino sumo su valor nominal
					suma2=suma2+0.5;//solo para control interno(BORRAR)
				}else{
					suma2=suma2+mazo[fila][columna];
				}
				mazo[fila][columna]=0;//marco la carta como usada
				cout<<"Lleva acumulado "<<suma2<<" puntos."<<endl;
				//vuelvo a mostrar el mazo sin las cartas que ya salieron
				cout<<"::::::::::::::MAZO::::::::::::::::"<<endl;
				for (int i=0;i<4;i++){
					for (int j=0;j<10;j++){
						cout<<mazo[i][j]<<" ";
					}
					switch(i){
						case 0:	cout<<"- Espadas"<<endl;break;
						case 1:	cout<<"- Bastos"<<endl;break;
						case 2: cout<<"- Copas"<<endl;break;
						case 3:	cout<<"- Oros"<<endl;break;
					}
				}
				cout<<"-------------------------------------"<<endl;
				if (suma1<=suma2 && suma2<=7.5){
					cout<<"================================="<<endl;
					cout<<"===La computadora ha ganado!!!==="<<endl;
					cout<<"================================="<<endl;
					control=false;
				}else if(suma1<=suma2 && suma2>7.5){
					cout<<"================================="<<endl;
					cout<<"=====Usted es el ganador!!!!====="<<endl;
					cout<<"================================="<<endl;
					control=false;
				}else{
					control=true;
				}
			}while(control);
		}
		//luego de terminar la mano pregunto si quiere seguir jugando
		cout<<"¿Desea continuar jugando?.(S/N)"<<endl;
		do{
			tec=getch();
			if(tec=='S'||tec=='s'){
				control2=false;//uso este control para obligar al usuario a poner S o N
			}else if(tec=='N'||tec=='n'){
				return 0;
			}else{
				cout<<"Debe indicar si desea seguir jugando (S/N)"<<endl;
				control2=true;
			}
		}while(control2);
		clrscr();
		//limpio las variables
		suma1=0;
		suma2=0;
		control=true;//dejo el bulce siempre en true para continuar jugando
		control4=true;//en caso de haber perdido solo, debo volver a acomodar esta variable
	}while(control);
}

