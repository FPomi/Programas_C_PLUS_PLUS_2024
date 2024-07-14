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
		
		/*cout << manoDeObra << endl;
		
		for (int habitante = 0; habitante < cantHabitantes; habitante ++){
			cout << " " << comercioHabitantes[habitante];
		}
		
		cout << endl;*/
		
	}
	
	return manoDeObra;
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int main() {

    int cantHabitantes;
    cin >> cantHabitantes;
 	
 	while (cantHabitantes >= 2){
 		
 		cout << calcularComercio (cantHabitantes) << endl;
 		cin >> cantHabitantes;
 		
 	}
	    
    return 0;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

