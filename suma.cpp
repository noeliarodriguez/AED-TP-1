/*-------------------------------------------------------
|  Noelia Rodriguez                                     |
|  Fecha:13/4/2015                                      |
|-------------------------------------------------------|
|  Descripción del Programa:                            |
|  Muestra la suma de dos enteros                       |
| -----------------------------------------------------*/

#include <iostream>
using namespace std;

// Programa Principal
int main()
{
	//variables
    int numero1;
    int numero2;
    int suma;

cout << "Escriba el primer numero:";
cin >> numero1;

cout << "Escriba el segundo numero";
cin >> numero2;

suma = numero1 + numero2;

cout << "La suma de "<<numero1<<" + "<<numero2<<" es "<<suma<<endl;

    return 0;           // Valor de retorno al S.O.
}


