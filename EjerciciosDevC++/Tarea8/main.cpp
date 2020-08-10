#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	float num;
	
	cout << "Calcular la raiz cuadrada de un numero" << endl;
	cout << "Ingrese un numero: ";
	cin >> num;
	
	cout << endl;
		
	if (num < 0)
	{
		system ("COLOR 04"); 
		cout << endl << "MATH ERROR" << endl;
	}
	else 
	{
		cout << "La raiz de: " << num << " es : " << sqrt(num);
	}	
	
	return 0;
}
