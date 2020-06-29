#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int numero1, numero2;
	numero1=(rand()%20+1);
	cout<<"Ingrese el numero a comparar: ";
	cin>>numero2;
	if(numero1>numero2){
		cout<<"El numero aleatorio es "<< numero1 <<" y es mayor";
	}else{
		if (numero1<numero2){
			cout<<"El numero aleatorio es "<< numero1 <<" y es menor";
		}else{
			cout<<"Los numeros son iguales";
		}
	}
	return 0;
}

