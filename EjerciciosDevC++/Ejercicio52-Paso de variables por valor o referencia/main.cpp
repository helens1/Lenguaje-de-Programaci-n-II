#include <iostream>

using namespace std;

void sumarConValorPorReferencia(int &a, int &b, int &resultado)
{
	a = 10;
	b = 12;
	resultado = a + b;
}

int main(int argc, char** argv)
{
	int num1 = 5;
	int num2 = 7;
	int r = 0;
	
	sumarConValorPorReferencia(num1, num2, r);
	
	cout << num1 << endl;
	cout << num2 << endl;
	cout << r;
	return 0;
}
