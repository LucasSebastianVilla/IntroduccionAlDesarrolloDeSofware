#include <iostream>
#include<conio2.h>
using namespace std;
//funcion que simula la tirada de dados, genera 5 valores aleatorios 
//donde cada uno representa un dado
void tirarCubilete(int dados[]){
	for(int i=0;i<5;i++){
		dados[i]=rand()%6 + 1;
	}
}
//funcion que muestra los dados en pantalla
void muestraDados(int dados[]){
	cout<<"Los dados son: ";
	for(int i=0;i<5;i++){
		cout<<dados[i]<<" ";
	}
	cout<<endl;
}
//funcion simple que solo da una pausa entre las jugadas
void esperaJugada(){
	cout<<"Presione cualquier tecla para realizar la jugada."<<endl;
	getch();
}
//funcion para calcular los puntos de cada tirada
//ademas informo que tipo de jugada salio
int calculaPuntos(int dados[],int puntaje){
	int valor_dados[6]={0,0,0,0,0,0};//almaceno la cantidad de cada dado que salio
	int tmp=0;
	string jugada;
	for(int i=0;i<6;i++){//voy acumulando cada dado que sale
		switch(dados[i]){
			case 1: valor_dados[0]++;break;
			case 2: valor_dados[1]++;break;
			case 3: valor_dados[2]++;break;
			case 4: valor_dados[3]++;break;
			case 5: valor_dados[4]++;break;
			case 6: valor_dados[5]++;break;
		}
	}
	//controlo numero por numero para ver cual es la jugada
	//de acuerdo a la ocurrencia de cada dado es el tipo de jugada
	//que se va a puntuar
	for(int i=0;i<6;i++){
		if(valor_dados[i]==5){//generala
			jugada="Generala";
			puntaje=60;
			break;
		}else if(valor_dados[i]==4){//poker
			jugada="Poker";
			puntaje=40;
			break;
		}else if(valor_dados[i]==1){//escalera
			//la siguiente linea la utilice para ver como se comportaban las variables
			//la dejo por si al evaluar el ejercicio necesitan ver como trabaja el algoritmo
			//cout<<"nro dado: "<<i+1<<" arr en i: "<<valor_dados[i]<<" arr en i+1: "<<valor_dados[i+1]<<" i: "<<i<<" tmp: ";
			if(i==5 or tmp==4){//valido que ademas sean correlativos
				tmp++;
			}else if(valor_dados[i+1]==valor_dados[i]){
				tmp++;
			}
			//cout<<tmp<<endl;- esto es parte del codigo comentado mas arriba
			if(tmp==5){
				jugada="Escalera";
				puntaje=50;
				break;
			}
		}else if(valor_dados[i]==3){//full
			for(int j=0;j<6;j++){//controlo que tenga un dado en 2 asi valido que es un full
				if(valor_dados[j]==2){
					jugada="Full";
					puntaje=30;
					break;
				}else{//realizo aca tambien la jugada de todos al 1-6
					int ant=0,k=0;
					for(int j=0;j<6;j++){
						if(ant<=valor_dados[j]){
							ant=valor_dados[j];
							k=j;
						}
					}
					jugada="Todo al " + to_string(k+1);
					puntaje=valor_dados[k]*(k+1);
				}
			}
			break;
		}else{//Todos al 1-6, veo cual numero tiene mas y lo sumo
			int ant=0,k=0;
			for(int j=0;j<6;j++){
				if(ant<=valor_dados[j]){
					ant=valor_dados[j];
					k=j;
				}
			}
			jugada="Todo al " + to_string(k+1);
			puntaje=valor_dados[k]*(k+1);
		}
	}
	cout<<"En la tirada salió "<<jugada<<endl;
	cout<<"El puntaje obtenido es "<<puntaje<<" puntos."<<endl;
	return puntaje;
}
	
//funcion para ordenar un array (provista por la catedra)
void ordenaDados(int a[],int n){
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++){
		min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}
	
int main(int argc, char *argv[]) {
	int dados[5];
	int puntaje1=0,puntaje2=0;
	cout<<"-------------------------Bienvenidos al juego Generala-------------------------"<<endl; 
	cout<<"El objetivo es sacar la mayor cantidad de puntos con los dados"<<endl;
	cout<<"Todo al 1-6: Se suman todos los dados iguales...... Puntaje: el nro por la cant"<<endl;
	cout<<"Full: 3 dados iguales y 2 dados iguales............ Puntaje: 30 puntos"<<endl;
	cout<<"Poker: 4 dados iguales............................. Puntaje: 40 puntos"<<endl;
	cout<<"Escalera: Dados que van del 1 al 5 o del 2 al 6.... Puntaje: 50 puntos"<<endl;
	cout<<"Generala: Todos los dados iguales.................. Puntaje: 60 puntos"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	srand(time(NULL));
	//jugada del usuario
	cout<<"======================================================="<<endl;
	cout<<"======================JUEGA USTED======================"<<endl;
	cout<<"======================================================="<<endl;
	esperaJugada();//espero la jugada
	tirarCubilete(dados);//tiro dados
	ordenaDados(dados,5);//ordeno los dados para un mejor calculo
	muestraDados(dados);//muestro los dados que salieron
	puntaje1=calculaPuntos(dados,puntaje1);//calculo el puntaje y que jugada salio
	//jugada de la pc
	cout<<"======================================================="<<endl;
	cout<<"================JUGADA DE LA COMPUTADORA==============="<<endl;
	cout<<"======================================================="<<endl;
	esperaJugada();//espero la jugada
	tirarCubilete(dados);//tiro dados
	ordenaDados(dados,5);//ordeno los dados para un mejor calculo
	muestraDados(dados);//muestro los dados que salieron
	puntaje2=calculaPuntos(dados,puntaje2);//calculo el puntaje y que jugada salio
	//comparo las jugadas, dictamino al ganador e informo con un mensaje
	if(puntaje1<puntaje2){
		cout<<"================================="<<endl;
		cout<<"===La computadora ha ganado!!!==="<<endl;
		cout<<"================================="<<endl;
	}else if(puntaje1>puntaje2){
		cout<<"================================="<<endl;
		cout<<"=====Usted es el ganador!!!!====="<<endl;
		cout<<"================================="<<endl;
	}else{
		cout<<"================================="<<endl;
		cout<<"=====Han empatado, Bravo!!!!====="<<endl;
		cout<<"================================="<<endl;
	}
	return 0;
}

