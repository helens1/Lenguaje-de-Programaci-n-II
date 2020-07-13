#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//datos de entrada
	int a= 0;
	int b= 0;
	int resultado = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
		
	//suma
	resultado = a + b; 
	cout << endl;
	cout << "La suma de a + b es: " << resultado << endl;
	
	//Resta
	resultado = a - b; 
	cout << endl;
	cout << "La resta de a - b es: " << resultado <<endl;
	
	//Multiplicación
	resultado = a * b; 
	cout << endl;
	cout << "La multiplicacion de a * b es: " << resultado <<endl;
	
	//Division
	resultado = a / b; 
	cout << endl;
	cout << "La division de a / b es: " << resultado <<endl;
	
	//fin

	return 0;
}
