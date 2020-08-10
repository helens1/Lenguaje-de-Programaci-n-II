#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;

int main(int argc, char** argv)
{
	double numero = 0;
	double seno = 0;
	double coseno = 0;
	double tangente = 0;
	
	numero = 2 * Pi;
	seno = sin (numero);
	coseno = cos(numero);
	tangente = tan(numero);
	
	cout << "numero: " << numero << endl;
	cout << "seno: " << seno << endl;
	cout << "coseno: " << coseno << endl;
	cout << "tangente: " << tangente << endl;
	
	return 0;
}
