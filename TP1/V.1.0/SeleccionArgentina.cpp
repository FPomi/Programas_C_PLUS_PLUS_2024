#include <iostream>
#include <algorithm>

using namespace std;


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

struct Jugador {
    string nombre;
    int ataque;
    int defensa;
};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//


bool esAlfabetico (string nombreJugador,string nombreComparador, int letra){
	
	if (nombreJugador == nombreComparador){
		return true;
	}
	
	if (nombreJugador[letra] < nombreComparador[letra]){
		return true;
	} 
	
	if (nombreJugador[letra] == nombreComparador[letra]){
		return esAlfabetico (nombreJugador, nombreComparador, letra + 1);
	}
	
	return false;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

bool seTieneQueIntercambiar (Jugador jugador, Jugador comparador){
	
	bool respuesta = false;
	
	if (jugador.ataque < comparador.ataque){
	
		respuesta = true;
	
	} else {
		
		if (jugador.ataque == comparador.ataque) {
			
			if (jugador.defensa > comparador.defensa){
				respuesta = true;
			}
			
			if ((jugador.defensa == comparador.defensa) && !(esAlfabetico (jugador.nombre, comparador.nombre, 0))){
				respuesta = true;
			}
		}
	}
	
	return respuesta;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int main() {

    int cantCasosPrueba;
    cin >> cantCasosPrueba;

    for (int casoDePrueba = 1; casoDePrueba <= cantCasosPrueba; casoDePrueba ++) {
        
        Jugador jugadores[10];
        
        for (int jugador = 0; jugador < 10; jugador ++) {
            cin >> jugadores[jugador].nombre >> jugadores[jugador].ataque >> jugadores[jugador].defensa;
        }
		
		for (int posicion = 0; posicion < 5; posicion ++){
			for (int comparador = posicion + 1; comparador < 10; comparador ++ ){
				if (seTieneQueIntercambiar (jugadores[posicion], jugadores[comparador])) {
					Jugador auxiliar = jugadores [posicion];
					jugadores [posicion] = jugadores [comparador];
					jugadores [comparador] = auxiliar;
				}
			}
		}
			
		cout << "Case " << casoDePrueba << ":" << endl;
		cout << "(" << jugadores[0].nombre << ", " << jugadores[1].nombre << ", " << jugadores[2].nombre << ", " << jugadores[3].nombre << ", " << jugadores[4].nombre << ")" << endl;
		cout << "(" << jugadores[5].nombre << ", " << jugadores[6].nombre << ", " << jugadores[7].nombre << ", " << jugadores[8].nombre << ", " << jugadores[9].nombre << ")" << endl;
    }

};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

