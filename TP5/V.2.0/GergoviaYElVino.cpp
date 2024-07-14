#include <iostream>
#include <math.h>

using namespace std;

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int calcularComercio (int cantHabitantes){
	
	int comercioHabitantes [cantHabitantes];
	int manoDeObra = 0;
	
	for (int habitante = 0; habitante < cantHabitantes; habitante ++){
		cin >> comercioHabitantes[habitante];
	}
	
	for (int habitante = 0; habitante < cantHabitantes - 1; habitante ++){
		comercioHabitantes [habitante + 1] += comercioHabitantes [habitante];
		manoDeObra += sqrt (comercioHabitantes [habitante] * comercioHabitantes [habitante]);
		comercioHabitantes [habitante] = 0;
	}
	
	cout << "mano de obra: "<< manoDeObra << endl;
		
	for (int habitante = 0; habitante < cantHabitantes; habitante ++){
		cout << " " << comercioHabitantes[habitante];
	}
		
	cout << endl;
	
	
	
	return manoDeObra;
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int main() {

    int cantHabitantes;
    int cantCiudades = 0;
    int ciudades [100];
    
    cin >> cantHabitantes;
 	cout << "Habitantes: " << cantHabitantes;
 	
 	while (cantHabitantes > 2){
 		
 		ciudades [cantCiudades] = calcularComercio (cantHabitantes);
 		cantCiudades ++;
 		
 		cin >> cantHabitantes;
 		
 	}
 	
 	for (int ciudad = 0; ciudad < cantCiudades; ciudad ++){
 		cout << ciudades [ciudad] << endl;
 	}
	    
    return 0;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

