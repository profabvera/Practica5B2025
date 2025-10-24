/* ********** testClasePer.cpp ************* */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */
#include <iostream>
#include "CPersona.h"
#include <locale>
using namespace std;

int main() {
	cout << "#################################" << endl;
	cout << "#  Prueba de la Clase CPersona #" << endl;
	cout << "#################################" << endl;
	
	string cad="";
	
	CPersona p1; // p1 es un objeto de la clase CPersona creado con valores por defecto
	cout << "Datos del objeto creado con valores por defecto" << endl;
	cout << p1.toString() << endl;
	cout << "\n\n\t Modificamos los atributos de el objeto creado " << endl;
	cout << "\n \t Utilizamos los métodos de asignación (seteos) " << endl;
	p1.setNombre("Armando B. ");
	p1.setApellido("VERA");
	p1.setGenero("Masculino");
	p1.setDni("27467459");
	p1.setFDNac(24081968);	
	cout << p1.toString() << endl;

// Creamos un nuevo objeto de la clase CPersona utilizando el constructor general
	cout << "\nNuevo objeto utilizando el constructor general " << endl;
	CPersona p2("Leonel", "Scaloni", "Masculino", "35879147", 14031985);
	cout << p2.toString() << endl;

// Creamos otro objeto de CPersona pero ahora, con datos ingresado por teclado.
//declaramos 5 objetos para contener de forma temporal los atributos del objeto.
	std::string nom;
	std::string ape;
	std::string gen;
	std::string dni;
	int fdn;		
	cout << "\nPor favor, ingrese los datos " << endl;
	cout << "\n\tNombre: ";
	getline(cin, nom);
	cin.clear();
	cout << "\n\tApellido: ";
	getline(cin, ape);
	cin.clear();
	cout << "\n\tGenero: ";
	getline(cin, gen);
	cin.clear();
	cout << "\n\tDNI: ";
	getline(cin, dni);
	cin.clear();
	cout << "\n\tFecha de Nac: ddmmaaaa ";
	cin >> fdn;
	cout << "Creamos un nuevo objeto con los datos ingresado por teclado" << endl;
	CPersona p3(nom,ape,gen,dni,fdn); // Declaramos un nuevo objeto CPersona utilizando el
										// constructor general con valores ingresado
										// en tiempo de ejecución.
	
	cout << p3.toString() <<endl;

    cout << "\n\nPrueba del operador = (de asignación) sobrecargado" << endl;	
	CPersona p4=p2; // Estoy asignando al objeto p4 los valores del objeto p2
	cout << p4.toString() << endl;
	
	cout << "\n\tProbamos ahora el operador << (de inserción) sobrecargado" << endl;
	cout << p2 << endl;
	
	cout << "\n\n\tProbamos ahora el operador >> (de estracción) sobrecargado " <<endl;
	
	CPersona p5;
	cin >> p5;
	cout << p5 <<endl;
	return 0;
}
		
/* Observaciones
La función getline(cin, nom) lo que hace es poner todo lo que hay en una linea en la variable nombre
* Con esta función es posible poner en la variable nom por ejemplo Eduardo Ariel.
*/
