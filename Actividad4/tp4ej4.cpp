#include <iostream>
using namespace std;
int control =0;
int valor;

int main(int argc, char *argv[]) {
	while(control!=5){ 
		cout<<"Ingrese un numero." <<endl;
		cin>>valor;
		if (valor % 2 !=0)
			control++;
	}
	return 0;
}

