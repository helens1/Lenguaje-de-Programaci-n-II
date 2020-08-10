#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv) 
{
	int numero1=0;
	int numero2=0;
	//inicializa el numero random
		system("cls");
	cout <<"\t  Juego de dados" << endl << endl;
	cout << "\t********" << "  ********\t\t" << endl;
	cout << "\t* *  * *" << "  * *    *\t\t" << endl;
	cout << "\t*   *  *" << "  *  *   *\t\t" << endl;
	cout << "\t* *  * *" << "  *    * *\t\t" << endl;
	cout << "\t********" << "  ********\t\t" << endl;
	
	cout << endl;
	cout << endl;
	
	cout << "Los numeros de sus dados son: " << endl << endl;
	
	srand (time(NULL));
	for (int i=0; i < 1; i ++)
	{
		//genera un numero entre 1 y 10
		
	numero1 = rand()% 6 + 1;
	numero2 = rand()% 6 + 1;
	cout << "primer dado: " << numero1 << endl;
	cout << "segundo dado: " << numero2 << endl;
	
	}
	
	system ("pause");
	
	return 0;
}

