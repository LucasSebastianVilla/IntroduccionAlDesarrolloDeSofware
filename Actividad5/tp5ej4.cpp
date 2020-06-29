#include <iostream>
using namespace std;

string nombre;
int a=0;

int main(int argc, char *argv[]) {
		cout<<"Ingrese un nombre: ";
		cin>>nombre;
		for(int i=0; i<nombre.length();i++){
			switch(nombre[i]){
			case 'a': case 'e': case 'i': case 'o': case 'u':
				a++;
			}
		}
		if (a>0){
			cout<<"El nombre tiene "<<a<<" vocales.";
		}
	return 0;
}

