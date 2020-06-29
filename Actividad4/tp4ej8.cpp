#include <iostream>

using namespace std;
int control=1;
int numero;
int bandera=0;

int main(int argc, char *argv[]) {
	do{
		cout<<"Ingrese un numero: ";
		cin>>numero;
		if (bandera==numero){
			control++;
		}else{
			control=0;
			bandera=numero;
		}
	} while(control<2);
	
	return 0;
}
