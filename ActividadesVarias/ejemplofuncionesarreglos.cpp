#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void armarMazo(int mazo[],int nro){
	//limites
	int lm = 0; int lM= 0;
	int _lm = 0; int _lM = 0;
	// Jugador 1
	if(nro == 1){
		lm = 0; lM = 48; _lm = 48; _lM = 96;
	}
	// Jugador 2
	if(nro == 2){
		_lm = 0; _lM = 48; lm = 48; lM = 96;
	}
	// mesa
	if(nro == 3){
		_lm = 0; _lM = 96;
	}
	
	for(int i=lm;i<lM;i++){
		mazo[i] = (i%12)+1;
	}
	for(int i=_lm;i<_lM;i++){
		mazo[i] = -1;
	}
}
	
	
	void mostrarMazo(int mazo[]){
		for(int i=0;i<96;i++){
			cout<<mazo[i]<<", ";
		}
	}
		
int sacarUnaCarta(int mazo[],int &pos){
	int carta;
	int id = 0;
	
	do{
		id = rand()%96;
	}while(mazo[id]==-1);
	
	carta=mazo[id];
	mazo[id]=-1;
	pos = id;
	
	return carta;
}
			
			
int ganadorMano(int carta1,int carta2){
	if(carta1 == carta2){
		return 0;
	}
	if(carta1 > carta2){
		return 1;
	}
	return 2;
}
				
void agregarAMesa(int mesa[],int mesaPos[], int carta1, int carta2, int pos1,int pos2){
	int i = 0;
	
	while(mesa[i]!=-1){
		i++;
	}
	mesa[i]=carta1;
	mesaPos[i++] = pos1;
	mesaPos[i] = pos2;
	mesa[i]=carta2;
	
}
					
void agregarCartaMazoJugador(int mazo[],int _mesa[],int mesaPosi[]){
	int i=0;
	while(_mesa[i]!= -1){
		mazo[mesaPosi[i]]= _mesa[i];
		i++;
	}
}
	
	
	int cantMazo(int mazo[]){
		int cont = 0;
		for (int i = 0; i<96; i++){
			if (mazo[i] != -1){
				cont++;
			}
		}
		return cont;
	}
							
int main (int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int mazo1[96];
	int mazo2[96];
	int mesa[96];
	int mesaPos[96];
	
	armarMazo(mazo1,1);
	armarMazo(mazo2,2);
	armarMazo(mesa,3);
	
	
	int o = 0;
	while(cantMazo(mazo1) > 0 && cantMazo(mazo2) > 0 ){
		
		
		int pos1;
		int pos2;
		int carta1 = sacarUnaCarta(mazo1,pos1);
		int carta2 = sacarUnaCarta(mazo2,pos2);
		
		cout<<endl<<"carta 1: "<<carta1<<endl;
		cout<<endl<<"carta 2: "<<carta2<<endl;
		
		int jugadorGanador = ganadorMano(carta1,carta2);
		agregarAMesa(mesa,mesaPos,carta1,carta2,pos1,pos2);
		
		
		if(jugadorGanador == 1){
			agregarCartaMazoJugador(mazo1,mesa,mesaPos);
			armarMazo(mesa,3);
			int cant1 = cantMazo(mazo1);
			int cant2 = cantMazo(mazo2);
			cout<<"cantidad cartas mazo: "<<cant1<<" : "<<cant2<< "suma: "<<cant1+cant2;
		}
		if(jugadorGanador == 2){
			agregarCartaMazoJugador(mazo2,mesa,mesaPos);
			armarMazo(mesa,3);
			int cant1 = cantMazo(mazo1);
			int cant2 = cantMazo(mazo2);
			cout<<"cantidad cartas mazo: "<<cant1<<" : "<<cant2<< "suma: "<<cant1+cant2;
		}
		
		
		
		cout<<" Manos:" <<o++<<endl;;
	}
	
	
	return 0;
}


