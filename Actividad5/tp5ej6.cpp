#include <iostream>
using namespace std;

string nombre;
int a=0,e=0,I=0,o=0,u=0;
bool control=false;

int main(int argc, char *argv[]) {
		cout<<"Ingrese un nombre: ";
		cin>>nombre;
		for(int i=0; i<nombre.length();i++){
			switch(nombre[i]){
				case 'a': 
					a++;
					control=true;
					break;
				case 'e': 
					e++;
					control=true;
					break;
				case 'i': 
					I++;
					control=true;
					break;
				case 'o': 
					o++;
					control=true;
					break;
				case 'u': 
					u++;
					control=true;
					break;
			}
		}
		if (control){
			cout<<"El nombre tiene "<<a<<" a, "<<e<<" e, "<<I<<" i, "<<o<<" o,"<<u<<" u.";
		}
	return 0;
}

