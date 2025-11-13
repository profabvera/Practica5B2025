#include "CAlumno.h"

CAlumno::CAlumno() : CPersona() {
	matricula=0;
	tutor=CPersona();
}
CAlumno::CAlumno(std::string nom_in, std::string ape_in, std::string dni_in,
			std::string gen_in, int fdn_in, int mat_in, CPersona tut_in) :
			CPersona(nom_in,ape_in,dni_in,gen_in,fdn_in) {
	matricula=mat_in;
	tutor=tut_in;
}

CAlumno::~CAlumno(){}

void CAlumno::setMatricula(int mat_in) {
	matricula=mat_in;
}
void CAlumno::setTutor(CPersona tut_in){
	tutor=tut_in;
}
int CAlumno::getMatricula() const {
	return matricula; 
}
CPersona CAlumno::getTutor() const {
	return tutor;
}
std::string CAlumno::toString() {
	CPersona t;
	std::stringstream s;
	s << "Nombre ----------: " << nombre << std::endl;
	s << "Apellido --------: " << apellido << std::endl;
	s << "Genero ----------: " << genero << std::endl;
	s << "DNI -------------: " << dni << std::endl;
	s << "Fecha de Nac. ---: " << fDNac << std::endl;
	s << "Matricula -------: " << matricula << std::endl;
	s << "Tutor -----------: " << tutor.getNombre() << " "<< tutor.getApellido() << std::endl;
	return s.str();
}
