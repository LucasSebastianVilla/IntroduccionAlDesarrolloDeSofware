#include <iostream>
using namespace std;
float promed(int arregl[],int largo){
	float suma=0;
	float resul;
	for(int i=0;i<largo;i++){
		suma=suma+arregl[i];
	}
	resul=suma/largo;
	return resul;
}
	
int main(int argc, char *argv[]) {
	int arre[]={10,15,32,41,20,18,7};
	float promedio=promed(arre,7);
	cout<<"El promedio es "<<promedio<<endl;
	return 0;
}

