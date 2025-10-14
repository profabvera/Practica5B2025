/* ********** CPersona.cpp ************* */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */

#include "CPersona.h"

CPersona::CPersona(){
	nombre="";
	apellido="";
	genero="";
	dni="00000000";
	fDNac=0;
}
CPersona::CPersona(std::string nom_in, std::string ape_in, std::string gen_in,
			std::string dni_in, int fdn_in){
			nombre=nom_in;
			apellido=ape_in;
			genero=gen_in;
			dni=dni_in;
			fDNac=fdn_in;
}
CPersona::CPersona(const CPersona & p){
	nombre=p.nombre;
	apellido=p.apellido;
	genero=p.genero;
	dni=p.dni;
	fDNac=p.fDNac;
}

CPersona::~CPersona(){}

// Métodos de asignación o seteos.

void CPersona::setNombre(std::string nom_in){
	nombre=nom_in;
}
void CPersona::setApellido(std::string ape_in){
	apellido=ape_in;
}
void CPersona::setGenero(std::string gen_in){
	genero=gen_in;
}
void CPersona::setDni(std::string dni_in){
	dni=dni_in;
}
void CPersona::setFDNac(int fdn_in){
	fDNac=fdn_in;
}

// Métodos de lectura o geters

std::string CPersona::getNombre() const {
	return nombre;
}
std::string CPersona::getApellido() const {
	return apellido;
}
std::string CPersona::getGenero() const {
	return genero;
}
std::string CPersona::getDni() const {
	return dni;
}
int CPersona::getFDNac() const {
	return fDNac;
}

std::string CPersona::toString() {
	std::stringstream s;
	s << "Nombre ----------: " << nombre << std::endl;
	s << "Apellido --------: " << apellido << std::endl;
	s << "Genero ----------: " << genero << std::endl;
	s << "DNI -------------: " << dni << std::endl;
	s << "Fecha de Nac. ---: " << fDNac << std::endl;
	return s.str();
}

// Sobrecarga del operador de asignación

CPersona& CPersona::operator = (const CPersona & p){
	nombre=p.nombre;
	apellido=p.apellido;
	genero=p.genero;
	dni=p.dni;
	fDNac=p.fDNac;
	return *this;
}

std::ostream& operator <<(std::ostream& pout, const CPersona & p){
//	pout << "Datos de la Persona" << std::endl<<std::endl;
	pout << "Nombre-----------:" << p.nombre <<std::endl;
	pout << "Apellido---------:" << p.apellido <<std::endl;
	pout << "Genero-----------:" << p.genero << std::endl;
	pout << "DNI N°-----------:" << p.dni << std::endl;
	pout << "Fecha de Nac.----:" << p.fDNac << std::endl;
	return pout;
}

std::istream& operator >> (std::istream& pin, CPersona & p){
	std::cout << "\n\tIngrese los datos de la persona " << std::endl;
	while(p.nombre==""){
		std::cout << "\tNombre: ";
		std::cin >> p.nombre;
		std::cin.clear();
	}
	while(p.apellido==""){
		std::cout << "\tApellido: ";
		std::cin >> p.apellido;
		std::cin.clear();
	}
	while(p.genero==""){
		std::cout << "\tGénero: ";
		std::cin >> p.genero;
		std::cin.clear();
	}
	while(p.dni=="00000000"){
		std::cout << "\tDNI N° : ";
		std::cin >> p.dni;
		std::cin.clear();
	}
	while(p.fDNac==0){
		std::cout << "\tFecha de Nac.: ";
		std::cin >> p.fDNac;
		std::cin.clear();
	}					
	return pin;
}
