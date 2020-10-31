#include<iostream>
#include "Juego.h"
#include "Auto.h"
#include <cstdlib>
using namespace std;

int main (int argc, char *argv[]) {
	srand(time(NULL));
	Juego *J = new Juego;
	J->play();
	
	return 0;
}

