/*
2. Escriba un algoritmo cuya entrada sea un número entero y muestra el resultado de la suma de
todos sus dígitos elevados a sí mismos.
Ejemplo: si el numero ingresado es 231 el resultado será 2^2+3^3+1^1=32, el programa
mostrara el número 32.
 */

#include <iostream>

using namespace std;

int main()
{
    int numero_1, numero_2, suma;
    cout<< "Ingrese un numero entero: ";
    cin>> numero_1;

    suma = 0;
    while (numero_1>0) {
        numero_2 = numero_1%10;
        numero_1 /= 10;
        suma +=  numero_2 * numero_2;
        cout<< numero_2 << "^"<< numero_2 << "+";

    }
    cout<< " = " << suma << endl;
    return 0;
}
