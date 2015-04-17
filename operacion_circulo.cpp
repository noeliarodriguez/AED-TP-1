/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha: 13/4/15                        |
|----------------------------------------|
|  Descripción del Programa:             |                          
|  Formula del circulo                   |                                        
| -------------------------------------*/

// Incluir E/S y Librerías Standard
#include <iostream>
#include <cstdlib>
using namespace std;


// Programa Principal
int main()
{
    // Declaración de Variables
	double pi = 3.14;
	double radio;
	double perimetro;
	double area;
	cout << "Calcular perimetro de una circunferencia: \n\n";
	cout << "Ingrese cuanto mide el radio: ";
	cin >> radio;
	
	perimetro = pi*radio;
	
	cout << "El perimetro de la circunferencia es: "<<perimetro<<"\n\n";
	cout << "Calcular perimetro de un circulo: \n\n";
	cout << "Ingrese cuanto mide el radio: ";
	cin >> radio;
	
	area = pi*(radio*radio);
	
	cout << "El area del circulo es: "<<area;
	
	 
	
    return 0;           // Valor de retorno al S.O.
}



