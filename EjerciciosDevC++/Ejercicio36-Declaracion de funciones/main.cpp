#include <iostream>
using namespace std;

int numero = 0;
int sumar(int a, int b);

int main(int argc, char const *argv[])

{
    numero = 5;
    cout << sumar(5, 7);

    cout << numero;

    return 0;
}

int sumar(int a, int b)
{
    numero = 7;
    return a + b;
}
