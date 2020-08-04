#include <iostream>

using namespace std;

int sumar ()
{
	return 5 + 7;
}

string nombreCompleto () 
{
	string nombre = "Juan";
	string apellido = "Perez";
	return nombre + " " + apellido;
} 
int main(int argc, char** argv) 
{
	int resultado = sumar();
	string nombreyApellido = nombreCompleto();
	
	cout << resultado;
	
	cout << endl;
	
	cout << nombreyApellido;
	
	
	
	return 0;
}
