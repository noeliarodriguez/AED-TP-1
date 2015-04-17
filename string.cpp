/*----------------------------------------
|  Autor: Noelia Rodriguez               |
|  Fecha: 13/4/15                        |
|----------------------------------------|
|  Descripción del Programa:             |                          
|  Ejemplo de uso de variables           |                                        
| -------------------------------------*/

// Incluir E/S y Librerías Standard
#include <iostream>
#include <cstdlib>
using namespace std;

// Programa Principal
int main()
{
    // Declaración de Variables 
    string nombre;
    string apellido;
	string nombre_completo;
	int edad;
	cout<<"Escribe tu nombre: ";
	cin>>nombre;
	
	cout<<"Escribe tu apellido: ";
	cin>>apellido;
	
	nombre_completo = nombre + apellido;
	cout<<"Cual es tu edad?: ";
	cin>>edad;
	
	if(edad>=18)
	cout<<"Hola, "<<nombre_completo<<" ya sos mayor de edad!\n\n";
	if(edad<18)
	cout<<"Hola, "<<nombre<<" aun no sos mayor de edad \n\n";
	
	cout << "Calcular cuantas letras contiene tu nombre completo: \n\n";
	cout << nombre_completo.length();
	
	
	return 0;           // Valor de retorno al S.O.
}

// Implementación de Procedimientos y Funciones

