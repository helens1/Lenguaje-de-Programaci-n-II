#include <iostream>
using namespace std;
double subtotal;
double impuesto = 0.15;
double total = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)

{
    listaProductos = listaProductos + descripcion + '\n';
    
    subtotal = subtotal + (cantidad * precio);
}


void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    total = subtotal + (subtotal * 0.15);
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "Impuesto: " << (subtotal *0.15);
    cout << endl;
    cout << "Total a pagar es: " << total;
    cout << endl;
    system("pause");
}
