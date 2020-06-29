#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if(numero % 2 ==0){
		cout<<"El numero es par";
	}else{
		cout<<"El numero es impar";
	}
	return 0;
}

