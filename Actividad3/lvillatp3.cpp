#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int anio, mes, dia, edad;
	int anioa, mesa, diaa;
	//datos de fecha actual, se tendra en consideracion que la fecha siempre sera bien colocada
	cout<<"Ingrese dia actual: ";
	cin>>diaa;
	cout<<"Ingrese mes actual: ";
	cin>>mesa;
	cout<<"Ingrese año actual: ";
	cin>>anioa;

	//datos de fecha de nacimiento
	cout<<"Ingrese su dia de nacimiento: ";
	cin>>dia;
	cout<<"Ingrese su mes de nacimiento: ";
	cin>>mes;
	cout<<"Ingrese su año de nacimiento: ";
	cin>>anio;
	
	if((anio<anioa)&&(0<mes && mes<13)){
		if(mesa<mes){
			edad=anioa-anio-1;
		}else{
			if (mesa==mes){
				if (diaa<dia){
					edad=anioa-anio-1;
				}else{
				edad=anioa-anio;
				}
			}else{
				edad=anioa-anio;
			}
		}
		switch(mes){
		case 1:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de enero de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 2:
			if (0<dia && dia<29){
				cout<<"Usted nacio el dia: "<<dia<< " de febrero de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 3:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de marzo de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 4:
			if (0<dia && dia<31){
				cout<<"Usted nacio el dia: "<<dia<< " de abril de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 5:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de mayo de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 6:
			if (0<dia && dia<31){
				cout<<"Usted nacio el dia: "<<dia<< " de junio de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 7:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de julio de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 8:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de agosto de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 9:
			if (0<dia && dia<31){
				cout<<"Usted nacio el dia: "<<dia<< " de septiembre de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 10:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de octubre de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 11:
			if (0<dia && dia<31){
				cout<<"Usted nacio el dia: "<<dia<< " de noviembre de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		case 12:
			if (0<dia && dia<32){
				cout<<"Usted nacio el dia: "<<dia<< " de diciembre de " <<anio<< " y tiene "<<edad<<" años." ;
			}
			break;
		}
	}else{
		cout<<"Los datos ingresados no son correctos";
	}
	return 0;
}

