/* ********** CPersona.h ************* */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */
#ifndef CPERSONA_H
#define CPERSONA_H

#include <iostream>
#include <string>
#include <sstream>
#include <ostream>
#include <istream>
#include <locale>

class CPersona {
	protected:
	   std::string nombre;
	   std::string apellido;
	   std::string genero;
	   std::string dni;
	   int fDNac;
	public:
	   CPersona();
	   CPersona(std::string nom_in, std::string ape_in,std::string gen_in,
			std::string dni_in, int fdn_in);
	   CPersona(const CPersona & p);
	   ~CPersona();
	   void setNombre(std::string nom_in);
	   void setApellido(std::string ape_in);
	   void setGenero(std::string gen_in);
	   void setDni(std::string dni_in);
	   void setFDNac(int fdn_in);
	   std::string getNombre() const;
	   std::string getApellido() const;
	   std::string getGenero() const;
	   std::string getDni() const;
	   int getFDNac()const;
	   std::string toString();
	   // sobrecarga de operadores
	   CPersona& operator=(const CPersona& p); // operador de asignacion
	   friend std::ostream & operator << (std::ostream& pout, const CPersona& p);
	   friend std::istream& operator >> (std::istream& pin, CPersona & p); 
	   
};

#endif // CPERSONA_H

