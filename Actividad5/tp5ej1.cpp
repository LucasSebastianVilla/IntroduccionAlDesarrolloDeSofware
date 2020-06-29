#include <iostream>
using namespace std;

int arreglo[10];
bool control=false;

int main(int argc, char *argv[]) {
		cout<<"Numeros del arreglo: ";
		srand(time(NULL));
		for(int i=0; i<10;i++){
			arreglo[i]=rand() % 9 + 1;
			cout<<arreglo[i]<<" ";
			if (arreglo[i]==5){ 
				control=true;
			}
		}
		if (control) {
			cout<<endl;
			cout<<"Se ha encontrado el Nro 5.";
		}
	return 0;
}

