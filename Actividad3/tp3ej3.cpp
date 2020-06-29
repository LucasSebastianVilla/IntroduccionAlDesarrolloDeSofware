#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1, numero2;
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
	if(numero1>numero2){
		cout<<"El primer numero es mayor";
	}else{
		if (numero1<numero2){
			cout<<"El segundo numero es mayor";
		}else{
			cout<<"Los numeros son iguales";
		}
	}
	return 0;
}

