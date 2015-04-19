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
    double suma = 0;

cout << "Escriba el primer numero:";
cin >> numero1;

cout << "Escriba el segundo numero";
cin >> numero2;

suma = numero1 + numero2;

cout << "La suma de "<<numero1<<" + "<<numero2<<" es "<<suma<<endl;


   //numero 1 variable que contiene el numero actual leido
   //double suma = 0;  variable que hace acumular los numeros leidos
    int numeros_leidos = 0;
	
    while(numeros_leidos < 5)//mientras ocurra esta condicion, hacer lo siguiente: 
	{ 
    	cout << "Escribe un numero: ";
    	cin >> numero1;
    	
    	suma = suma + numero1; //almacena los valores y los va sumando cada vez que hay una iteracion
    	numeros_leidos++; //Almacena en la variable el numero actual leido y le suma 1 cada vez q se repite la iteracion hasta que el valor leido sea < 5
    	
	}
    
    cout << "La suma de los numeros es: " <<suma<<endl;
    cout << "El promedio es: "<< suma / 5 <<endl;
    
    cout << "Escriba dos numeros para comparar: ";
    cin >>numero1>>numero2;
    
    if (numero1 > numero2)
    cout <<numero1<<" es mayor que "<<numero2<<endl;
    
    if (numero1 == numero2)
    cout <<numero1<<" es igual a "<<numero2<<endl;
    
    if (numero1 < numero2)
    cout <<numero1<<" es menor que "<<numero2<<endl;


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
	cout << nombre_completo.length()<<endl;
	
	
    char a = '$';
    char b = '%';
    bool c = (a==b);
    cout << "Comparacion de tipo char: " <<endl;
    cout << boolalpha;
    cout << c << endl;
    
    int z;
    int x;
    bool j;
    cout << "Comparacion de tipo bool: "<<endl;
    cout << "Numero A: ";
	cin >> z;
	cout << "Numero B: ";
	cin >> x; 
    c = a > b;
    cout << boolalpha; //Imprime los valores booleanos en true o false
	cout << "A mayor que B: "<<c;
    
    return 0;           // Valor de retorno al S.O.

}


