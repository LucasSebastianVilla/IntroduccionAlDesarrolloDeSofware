#include <iostream>
using namespace std;
int arreglo[20];
int valor, pos, i;

int main(int argc, char *argv[]) {
	for(i=0; i<20;i++){
		arreglo[i]=0;
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	i=1;
	while(i<5){
		cout<<"Ingrese un valor: ";
		cin>>valor;
		cout<<"ingrese la posicion: ";
		cin>>pos;
		if (0<pos and pos<21){
			arreglo[pos-1]=valor;
			i++;
		for(int j=0; j<20;j++){
			cout<<arreglo[j]<<" ";
		}
		cout<<endl;
		}else{
			cout<<"LA POSICION NO ES CORRECTA"<<endl;
		}
	}	
	return 0;
}

