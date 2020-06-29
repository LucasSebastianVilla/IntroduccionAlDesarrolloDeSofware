#include <iostream>
using namespace std;

int arreglo[100], arreglopar[50], arregloimpar[50];
int j=0,k=0;

int main(int argc, char *argv[]) {
		cout<<"Numeros del arreglo: ";
		for(int i=0; i<100;i++){
			arreglo[i]=i+1;
			cout<<arreglo[i]<<" ";
			if (arreglo[i]%2==0){
				arreglopar[j]=arreglo[i];
				j++;
			}else{
				arregloimpar[k]=arreglo[i];
				k++;
			}
		}
		cout<<endl;
		cout<<"Los Nros del arreglo par son: ";
		for(int i=0; i<50;i++){
			cout<<arreglopar[i]<<" ";
		}
		cout<<endl;
		cout<<"Los Nros del arreglo impar son: ";
		for(int i=0; i<50;i++){
			cout<<arregloimpar[i]<<" ";
		}	
	return 0;
}

