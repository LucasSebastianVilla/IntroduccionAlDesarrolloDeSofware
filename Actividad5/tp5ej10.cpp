#include <iostream>
using namespace std;
int arreglo[100];

int main(int argc, char *argv[]) {
	cout<<"Numeros del arreglo: ";
	srand(time(NULL));
	for(int i=0; i<100;i++){
		arreglo[i]=rand() % 99 + 1;
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	cout<<"Numeros invertidos: ";
	for(int i=99; i>-1;i--){
		cout<<arreglo[i]<<" ";
	}
	return 0;
}

