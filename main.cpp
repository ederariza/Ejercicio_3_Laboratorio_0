/*
2. Escriba un algoritmo cuya entrada sea un número entero y muestra el resultado de la suma de
todos sus dígitos elevados a sí mismos.
Ejemplo: si el numero ingresado es 231 el resultado será 2^2+3^3+1^1=32, el programa
mostrara el número 32.
 */

#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    //Bloque que descompone el numero hallando sus digitos
    int numero_nuevo = numero;
    int digito = 0;
    while (numero_nuevo > 0){

        if (numero_nuevo % 10 != 0)
            digito += 1,
            numero_nuevo = numero_nuevo / 10;

    else
            digito += 1,
            numero_nuevo = numero_nuevo / 10;

    }

    //Bloque que halla la potencia de 10 mayor del numero
    int potencia;
    for (int i = 0; i < digito; i++){

        if (i == 0)
            potencia = 1;

        else
            potencia *= 10;
    }

    //Bloque que genera las potencias de cada digito del numero
    int suma = 0;
    for (int i = 0; i < digito; i++){

        numero_nuevo = numero / potencia;
        numero -= numero_nuevo * potencia;
        potencia /= 10;
        suma += numero_nuevo * numero_nuevo;

        if (i != digito - 1)
            cout << numero_nuevo << "^" << numero_nuevo << " + ";

        else
            cout << numero_nuevo << "^" << numero_nuevo << " = " << suma << endl;
    }

    return 0;
}
