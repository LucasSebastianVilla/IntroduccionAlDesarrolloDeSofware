#include <ctime>
#include <iostream>

using namespace std;

int numero;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	for(int i=1; i<7; i++){
		numero=rand() % 7 + 1;
		cout<<"El numero de la tirada " << i << " es " << numero << endl;
	}
	
	return 0;
}
