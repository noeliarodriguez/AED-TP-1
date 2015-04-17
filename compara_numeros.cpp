/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha: 13/4/15                        |
|----------------------------------------|
|  Descripción del Programa:             |                         
|                                        |                                        
| -------------------------------------*/

#include <iostream>
using namespace std;

// Programa Principal
int main()
{
    // Declaración de Variables
    int numero1;
    int numero2;
    
    cout << "Escriba dos numeros para comparar: ";
    cin >>numero1>>numero2;
    
    if (numero1 > numero2)
    cout <<numero1<<" es mayor que "<<numero2<<endl;
    
    if (numero1 == numero2)
    cout <<numero1<<" es igual a "<<numero2<<endl;
    
    if (numero1 < numero2)
    cout <<numero1<<" es menor que "<<numero2<<endl;
    
    return 0;           // Valor de retorno al S.O.
}


