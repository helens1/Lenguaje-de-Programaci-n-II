#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int numeroSecreto = 7;
	int numero = 0;
		
	cout << "Ingresaste el numero: ";
	cin >> numero;
	
	cout << endl;
	
	if (numero == numeroSecreto) {
		cout << "Adivinaste el numero secreto: " << numero;
	} else {
		cout << "No adivinaste ";
	}
	
	
	return 0;
}
