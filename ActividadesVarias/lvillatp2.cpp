#include <iostream>
using namespace std;
// TP2 Ej14

int main(int argc, char *argv[]) {
	string nombre;
	int vida=10;
	int runa1,runa2,runa3;
	
	cout <<"================================================" <<endl;
	cout <<"Ingrese nombre del personaje: ";
	cin >>nombre;
	cout<<endl;
	cout <<"Su nombre es: " <<nombre <<endl;
	cout <<"Sus puntos de vida son: " <<vida <<endl;
	cout <<"Ingrese primera runa (1 al 10) ";
	cin >>runa1;
	cout<<endl;
	cout <<"Ingrese segunda runa (1 al 10) ";
	cin >>runa2;
	cout<<endl;
	cout <<"Ingrese tercera runa (1 al 10) ";
	cin >>runa3;
	cout<<endl;
	vida=vida + runa1/2-runa2+runa3/2;
	cout <<"Sus puntos de vida son: " <<vida <<endl;
	vida=vida + runa1/2-runa2+runa3/2;
	cout <<"Sus puntos de vida son: " <<vida <<endl;
	bool vivo = vida >0;
	cout <<"Tu persona sigue vivo?: "<<vivo <<endl;
	cout <<"================================================" <<endl;
	return 0;
}

