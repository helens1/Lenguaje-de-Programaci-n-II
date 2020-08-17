#include<cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void introduce(int matriz [][5]);
void leer (int matriz [][5]);
int sumar;

int main()
{
	int matriz[5][5];

	
	introduce (matriz);
	leer (matriz);
	
	system ("pause");
	return 0;
	
}

void introduce (int matriz [][5])
{
	int i, j;

	srand(time(NULL));
	
	for (i=0; i<5;i++)
	{
		for (j=0; j <5; j++)
		{
			matriz [i][j]= rand()%5;
		}
	}
}

void leer (int matriz [][5])
{
	int i,j;
	int sumar=0;
	
	for(i=0;i < 5; i++)
	{
		for (j=0; j <5; j++)
		{
			sumar = matriz[i][j]+sumar;
			cout << matriz[i][j] <<" ";
			
		}

	}
 	
	cout << endl ; 
	cout<< "Total suma es: " << sumar<<endl;
}

