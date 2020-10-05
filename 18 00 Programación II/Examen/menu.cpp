#include <iostream>


using namespace std;
void starShip();
void snake();
void menu ()
{
    int opcion = 0;
    while (true)
    {
        system("cls");
        cout << "**************" << endl;
        cout << "MENU DE JUEOS" << endl;
        cout << "**************" << endl;
        cout << endl;
        cout << endl;

        cout << "Seleccione un juego" << endl;
        cout << "*******************" << endl;
        cout << "1 - starShip" << endl;
        cout << "2 - snake" << endl;

        cout << "Ingrese un numero del menu: ";
        cin >> opcion;

        if (opcion == 1)
        {
        	system("cls");
            starShip();
        }
        if (opcion == 2)
        {
        	system("cls");
            snake();
        }
                    
		if (opcion < 0 || opcion > 2) 
		{
            system("cls");
            cout << "Ingrese un numero del menu" << endl << endl;
            system("pause");
        }
    }    
}

