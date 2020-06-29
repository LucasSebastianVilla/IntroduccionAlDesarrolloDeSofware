#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	cout<<"Ingrese un numero: ";
	cin>>numero1;
	if(numero1 % 2==0){
		if ((numero1>0 && numero1<26)||(numero1>74 && numero1<101)){
			cout<<"El numero cumple con la consigna";
		}else{
			cout<<"El numero no cumple con la consigna";
		}
	}else{
		cout<<"El numero no cumple con la consigna";
	}
	return 0;
}

