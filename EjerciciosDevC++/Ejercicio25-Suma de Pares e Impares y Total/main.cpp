#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int pares = 0;
	int impares = 0;
	int total;
	
	for (int i = 1; i <= 10; i++)
	{
		if(i % 2 != 0)
		{
		impares = impares + i;	
		} else
			pares = pares +i;
		cout << i << " ";
	}
	
	cout << endl;
	cout << endl;
	
	total = impares + pares; 
	
	cout << "Total impares: " << impares << endl; 
	cout << "Total pares: " << pares << endl;
	cout << "Total (impares + pares): " << total;
	
	return 0;
}
