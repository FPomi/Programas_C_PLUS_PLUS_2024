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
		
		if ((comercioHabitantes[habitante] < -1000) || (comercioHabitantes[habitante] > 1000)){
			return -1;
		}
		
	}
	
	for (int habitante = 0; habitante < cantHabitantes - 1; habitante ++){
		comercioHabitantes [habitante + 1] += comercioHabitantes [habitante];
		manoDeObra += sqrt (comercioHabitantes [habitante] * comercioHabitantes [habitante]);
		comercioHabitantes [habitante] = 0;
	}
	
	return manoDeObra;
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int main() {

    int cantHabitantes, manoDeObra;
    cin >> cantHabitantes;
 	
 	while (cantHabitantes != 0){
 		
 		if ((cantHabitantes >= 2)&&(cantHabitantes <= 100000)){
 			
			 manoDeObra = calcularComercio (cantHabitantes);
 			
 			if (manoDeObra > -1){
 				cout << manoDeObra <<endl;
 			}
 			
 		}
 		
 		cin >> cantHabitantes;
 		
 	}
	    
    return 0;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

