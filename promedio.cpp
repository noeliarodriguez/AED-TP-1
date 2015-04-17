/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha: 14/4/15                        |
|----------------------------------------|
|  Descripción del Programa:             |                          
|  Leer 5 numeros y calcular promedio    |                                     
| -------------------------------------*/

#include <iostream>
#include <cstdlib>
using namespace std;


// Programa Principal
int main()
{
    // Declaración de Variables
    int numero_actual;   //variable que contiene el numero actual leido
    double suma;  // variable que hace acumular los numeros leidos
    int numeros_leidos = 0;
	 
    while(numeros_leidos < 5)//mientras ocurra esta condicion, hacer lo siguiente: 
	{ 
    	cout << "Escribe un numero: ";
    	cin >> numero_actual;
    	
    	suma = suma + numero_actual; //almacena los valores y los va sumando cada vez que hay una iteracion
    	numeros_leidos++; //Almacena en la variable el numero actual leido y le suma 1 cada vez q se repite la iteracion hasta que el valor leido sea < 5
    	
	}
    
    cout << "La suma de los numeros es: " <<suma<<endl;
    cout << "El promedio es: "<< suma / 5 ;
    

    return 0;           // Valor de retorno al S.O.
}



