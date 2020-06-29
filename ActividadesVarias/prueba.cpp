#include <iostream>
using namespace std;
int monedas,numero;

int main(int argc, char *argv[]) {
	cout<<"Ingrese la cantidad de monedas que desee. (1-9)"<<endl;
	cin>>monedas;
	if (0<monedas && monedas<10){
		//control=false;
		for(int i=1;i==monedas;i++){
			cout<<monedas;
			cout<<"Los numeros de la moneda " << monedas << " son: ";
			for(int j=1;j==3;j++){
				srand(time(NULL));
				numero=rand() % 7 + 1;
				cout<<numero<<" ";
			}
		}
	}
	return 0;
}

