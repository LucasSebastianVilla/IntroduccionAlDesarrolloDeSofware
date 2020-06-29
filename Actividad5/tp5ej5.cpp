#include <iostream>
using namespace std;

string nombre;
int a=0;

int main(int argc, char *argv[]) {
		cout<<"Ingrese un nombre: ";
		cin>>nombre;
		for(int i=0; i<nombre.length();i++){
			if (nombre[i]=='a' ||nombre[i]=='A'){
				a++;
			}
		}
		if (a>0){
			cout<<"La letra a se repite "<<a<<" veces.";
		}
	return 0;
}

