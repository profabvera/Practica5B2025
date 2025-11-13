#include <iostream>
#include "../CPERSONA/CPersona.h"
#include "CAlumno.h"
#include <array>
using namespace std;
int main() {
	CAlumno alu1;
	CPersona t;
	t.setNombre("Guido");
	t.setApellido("Carrera");
	alu1.setTutor(t);
	cout << alu1.toString() << endl;
	
	return 0;
}
