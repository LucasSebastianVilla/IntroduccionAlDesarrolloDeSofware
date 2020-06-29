#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int numero1;
	numero1=(rand()%5+1);
	cout<<"El numero aleatorio es "<<numero1<<".\n";
	switch (numero1){
		case 1:
			cout<<"Primero";
			break;
		case 2:
			cout<<"Segundo";
			break;
		case 3:
			cout<<"Tercero";
			break;
		case 4:
			cout<<"Cuarto";
			break;
		case 5:
			cout<<"Quinto";
			break;
	}
	return 0;
}

