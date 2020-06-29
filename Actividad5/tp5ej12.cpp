#include <iostream>
using namespace std;
int suma[20],operando1[20],operando2[20];


int main(int argc, char *argv[]) {
	cout<<"Numeros del arreglo 1: ";
	srand(time(NULL));
	for(int i=0; i<20;i++){
		operando1[i]=rand() % 5 + 1;
		cout<<operando1[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros del arreglo 2: ";
	for(int i=0; i<20;i++){
		operando2[i]=rand() % 5 + 1;
		cout<<operando2[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros de la suma:    ";
	for(int i=0; i<20;i++){
		suma[i]=operando1[i]+operando2[i];
		cout<<suma[i]<<" ";
	}
	return 0;
}

