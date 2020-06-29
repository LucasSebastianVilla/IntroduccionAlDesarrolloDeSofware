#include <ctime>
#include <iostream>

using namespace std;
int numero,numpos,numsum,numant;
int intentos=1;
bool bandera=true;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	numero=rand() % 20 + 1;
//	cout<<numero;
	do{
		cout<<"¿Cual es el numero?: ";
		cin>>numpos;
		numsum=numero-numpos;
		if (intentos==1){
			intentos++;
			if (numero==numpos){
				cout<<"¡Es correcto!";
				bandera=false;
			}else{
				if(numero<numpos){
					cout<<"El numero a adivinar es menor"<< endl;
				}else{
					cout<<"El numero a adivinar es mayor"<< endl;
				}
			}
		}else{
			if (numero==numpos){
				cout<<"¡Es correcto!";
				bandera=false;
			}else{
				if(abs(numsum)<numant){
					cout<<"¡Caliente!, estas cerca."<< endl; 
				}else{
					cout<<"¡Frio!, te estas alejando."<< endl;
				}
			}			
		}
		numant=abs(numsum);
	} while(bandera );
	
	return 0;
}
