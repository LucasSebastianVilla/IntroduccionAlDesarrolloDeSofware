#include <iostream>
using namespace std;
void contador(int arreglon[],int largo,int numero){
	int cont=0;
	for(int i=0;i<largo;i++){
		if(arreglon[i]==numero){
			cont++;
		}
	}
	cout<<"El numero "<<numero<<" esta repetido "<<cont<<" veces";
}
	
int main(int argc, char *argv[]) {
	//armo un array aleatorio
	int num;
	srand(time(0));
	//int largo=rand() % 15 + 1;
	int arreglo[15];
	for(int i=0;i<15;i++){
		arreglo[i]=rand() % 10 + 1;
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	cout<<"Ingrese un numero a buscar ";
	cin>>num;
	contador(arreglo,15,num);
	return 0;
}

