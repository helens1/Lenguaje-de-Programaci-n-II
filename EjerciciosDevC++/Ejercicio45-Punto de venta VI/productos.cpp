#include <iostream>

using namespace std;
extern void agregarProducto(string descripcion, int cantidad, double precio);
void productos(int opcion)

{
    system("cls");
    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Te Frio" << endl;
        cout << "2 - Frozen Coffe" << endl;
        cout << "3 - Iced Latte" << endl;
        cout << endl;
        
	    cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Te Frio - L 35.00", 1, 35);
            break;
        case 2:
            agregarProducto("1 Frozen Coffe - L 51.00", 1, 51);
            break;
		case 3:
            agregarProducto("1 Iced Latte - L 48.00", 1, 48);
            break;         
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        
        system("pause");
        break;
    }
    case 3:
    { 	cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Muffins" << endl;
        cout << "2 - Snacks Dulces" << endl;
        cout << "3 - Cupcakes" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Muffins - L 25.00", 1, 25);
            break;
        case 2:
            agregarProducto("1 Snacks Dulces - L 30.00", 1, 30);
            break;
		case 3:
            agregarProducto("1 Cupcakes - L 35.00", 1, 35);
            break;          
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        break;
                            
        
    }        
    default:
        break;
    }
}
