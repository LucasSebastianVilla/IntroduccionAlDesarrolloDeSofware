#include <iostream>
using namespace std;

int arreglo[20];
int nroant=0;

int main(int argc, char *argv[]) {
		cout<<"Numeros del arreglo: ";
		srand(time(NULL));
		for(int i=0; i<20;i++){
			arreglo[i]=rand() % 99 + 1;
			cout<<arreglo[i]<<" ";
			if (arreglo[i]>nroant){ 
				nroant=arreglo[i];
			}
		}
		cout<<endl;
		cout<<"El Nro mas alto es: "<<nroant;
	return 0;
}

