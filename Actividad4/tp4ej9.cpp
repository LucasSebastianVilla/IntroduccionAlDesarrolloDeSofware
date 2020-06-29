#include <ctime>
#include <iostream>

using namespace std;
int control=5;
int numero,numpos;
bool bandera=true;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	numero=rand() % 20 + 1;
	cout<<numero;
	do{
		cout<<"¿Cual es el numero?: ";
		cin>>numpos;
		if (numero==numpos){
			cout<<"¡Es correcto!";
			bandera=false;
		}else{
			cout<<"No es correcto, te quedan "<< control-1 << " intentos."<< endl; 
			control--;
		}
	} while(control>0 && bandera );
	
	return 0;
}
