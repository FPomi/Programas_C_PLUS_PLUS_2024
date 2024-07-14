//1. corrobora que tienen cantidades pares de a's y b's
//2. buscar forma recursiva de intercambiar letras para que sean iguales 
//3. celebrar

#include <iostream>

using namespace std;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int cantidadDeEn (string caracter, string palabra){
	
	int cantidad = 0;
	string letra;
	
	for (int posicion = 0; posicion < palabra.length(); posicion ++){
		
		letra = palabra [posicion];
		
		if (letra == caracter){
			cantidad ++;
		}
	}
	
	return cantidad;
	
}



//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

bool esPosibleIgualar (string primeraPalabra, string segundaPalabra){
	
	bool respuesta = true;
	
	if (primeraPalabra.length() != segundaPalabra.length()){
		respuesta = false;
	}
	
	if ((cantidadDeEn("a", primeraPalabra) + cantidadDeEn("a", segundaPalabra)) % 2 != 0){
		respuesta = false;
	}
	
	if ((cantidadDeEn("b", primeraPalabra) + cantidadDeEn("b", segundaPalabra)) % 2 != 0){
		respuesta = false;
	}
	
	return respuesta;
		
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int main (){
	
	int largoPalabras;
	int cantidadDePasos = 0;
	string primeraPalabra, segundaPalabra;
	
	cin >> largoPalabras;
	cin >> primeraPalabra;
	cin >> segundaPalabra;
	
	if (! esPosibleIgualar(primeraPalabra, segundaPalabra)){
		cout << -1;
	}else{
		
		//voy a corroborar
		cout << 0;
	}
	
	
	return  0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

