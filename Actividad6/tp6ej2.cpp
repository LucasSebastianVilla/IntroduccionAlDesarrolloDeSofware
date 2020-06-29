#include <iostream>
using namespace std;

int dado(int caras){
	int nro;
	srand(time(0));
	nro=rand() % caras + 1;
	return nro;
}

int main(int argc, char *argv[]) {
	int car;
	cout<<"Ingrese la cantidad de caras del dado. "<<endl;
	cin>>car;
	int dadito=dado(car);
	cout<<"El numero ganador es "<<dadito<<" y el dado tiene "<<car<<" caras"<<endl;
	return 0;
}

