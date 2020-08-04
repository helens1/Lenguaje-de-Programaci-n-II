#include <iostream>

using namespace std;

int sumar (int a, int b)
{
	return a + b;
}

int calculadora(int a, int b, char operador)
{
	if (operador == '+')
	{
		return sumar (a,b);
	} 
	return -1;
}
int main(int argc, char** argv)
{
	int n1 = 0;
	int n2 = 0;
	char operador;
	
	cout <<"Ingrese a: ";
	cin >> n1;
	cout << "Ingrese b:";
	cin >> n2;
	cout << "Ingrese un operador (+, -, *, /): ";
	cin >> operador;
	
	cout << endl;
	
	cout << "Resulatdo de " << n1 << operador << n2 << " es: ";
	cout << calculadora(n1, n2, operador);
	
	return 0;
}
