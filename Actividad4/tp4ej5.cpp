#include <ctime>
#include <iostream>
#include <conio2.h>

using namespace std;

int main(int argc, char *argv[]) {
	if(kbhit()) { 
		int tecla=getch();
		switch(tecla){		
			case 75: //izquierda
				cout<<"izquierda"<<endl;
				break;
			case 77: //derecha
				cout<<"derecha"<<endl;
				break;
			case 72: //arriba
				cout<<"arriba"<<endl;
				break;
			case 80: //abajo
				cout<<"abajo"<<endl;
				break;
			case 'q':
				return 1;
		}
	}
	return 0;
}

