#include <iostream>
using namespace std;

void saludo(string nombre){
	cout<<"Hola "<<nombre;
}

int main(int argc, char *argv[]) {
	string noom;
	cout<<"Ingrese su nombre. "<<endl;
	cin>>noom;
	saludo(noom);
	return 0;
}

