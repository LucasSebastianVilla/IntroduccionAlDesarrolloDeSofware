#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if(numero>0){
		cout<<"El numero es positivo";
	}else{
		if (numero<0){
			cout<<"El numero es negativo";
		}else{
			cout<<"El 0 no posee signo";
		}
	}
	return 0;
}

