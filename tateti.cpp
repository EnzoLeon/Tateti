#include <string>
#include <ostream>
#include "tateti.h"

using namespace std;

Tateti::Tateti(const string& jugador1, const string& jugador2){
	this-> jugadores[0]=jugador1;
	this-> jugadores[1]=jugador2;
	this-> jActual=0;
}

bool Tateti::realizarJugada(unsigned short i, unsigned short j){
	if(this->tablero[i][j]==' '){
		if(this->jActual==0){
			this->tablero[i][j]='X';
		} else {this->tablero[i][j]='O';
	        }
	    this->jActual= (this->jActual + 1) %2;
	    return true;
	}
}

void Tateti::reiniciar(){
	this->tablero[3][3] = [ [' ',' ',' '] , [' ',' ',' '] , [' ',' ',' '] ] ;
}