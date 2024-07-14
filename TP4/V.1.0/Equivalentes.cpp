#include <iostream>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

bool sonEquivalentes (string primerConjunto, string segundoConjunto){
	
	if (primerConjunto.length() == segundoConjunto.length()){
		
		int tamanio = primerConjunto.length();
		
		if	(primerConjunto == segundoConjunto){
			return true;
		}
		
		for (int i = 1; i < tamanio; i++) {
				
        	string primerConjuntoPrimeraMitad = primerConjunto.substr(0, i);
        	string primerConjuntoSegundaMitad = primerConjunto.substr(i);
        
        	string segundoConjuntoPrimeraMitad = segundoConjunto.substr(0, i);
        	string segundoConjuntoSegundaMitad = segundoConjunto.substr(i);

        	
        	if ((sonEquivalentes(primerConjuntoPrimeraMitad, segundoConjuntoPrimeraMitad) && sonEquivalentes(primerConjuntoSegundaMitad, segundoConjuntoSegundaMitad)) || (sonEquivalentes(primerConjuntoPrimeraMitad, segundoConjuntoSegundaMitad) && sonEquivalentes(primerConjuntoSegundaMitad, segundoConjuntoPrimeraMitad))) {
            	return true;
        	}
    	}	
    	
	}
		
	return false;
	
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

int main() {
	
    string primerString, segundoString;
    cin >> primerString >> segundoString;
    
    if (sonEquivalentes(primerString, segundoString)) {
    	cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }
    
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
