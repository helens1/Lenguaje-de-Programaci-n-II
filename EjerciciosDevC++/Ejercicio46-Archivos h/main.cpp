#include <iostream>
#include "calculadora.h"
#include "alumnos.h"
using namespace std;

int main(int argc, char** argv) 
{
	cout << calcular (5 , 7, '+');
	cout << endl;
	cout << obtenerNombreCompleto();
	cout << endl;
	cout << obtenerEdad();
	return 0;
}
