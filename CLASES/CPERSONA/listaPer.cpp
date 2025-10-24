/* ********** listaPer.cpp ************* */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */

#include <iostream>
#include "CPersona.h"
#include <array>
using namespace std;

const size_t tamArray=5;

int main() {
	cout << "Creamos una lista de 5 personal utilizando un array" << endl;
	cout << "Cada objeto del array es creado con valores por defecto " << endl;
	array <CPersona, tamArray> listaPer;
	for(size_t i=0; i<listaPer.size(); i++){
		cout << listaPer[i] << endl;
	}
	cout << "\nLo hemos mostrado utilizando el operador cout sobrecargado " << endl;
	// Vamos a actualizar los datos del primer elemento del array
	/*
	cin >> listaPer[0];
	cout << listaPer[0] << endl;
	
	for(size_t i=0; i<listaPer.size(); i++){
		cout << listaPer[i] << endl;
	}
	*/
	cout << "\n\tExiste otra forma de definir un array directamente " << endl;
	CPersona listaPer1[tamArray];
	for(size_t i=0; i<tamArray; i++){
		cout << listaPer1[i] << endl;
	}
	
	return 0;
}


/* Configuración para la compilación en el IDE Geany
 En el menu "Construir" elije "Establecer comandos de construcción"
 * En la fila que corresponde "Construir prueba de clase" en el
 * campo "comando" escribe
  g++ -o listaPer CPersona.o listaPer.cpp
  * y guarda los cambios con aceptar. */
  

 
