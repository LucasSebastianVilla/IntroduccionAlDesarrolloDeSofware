#include <iostream>
using namespace std;

int mayor(int arreglo[],int largo){
	int may=0;
	for(int i=0;i<largo;i++){
		if (arreglo[i]>may){
			may=arreglo[i];
		}
	}
	return may;
}

int main(int argc, char *argv[]) {
		int arre[8]={2,5,3,4,9,2,3,7};
		int mayo=mayor(arre,8);
		cout<<"El mayor es el "<<mayo<<endl;
	return 0;
}

