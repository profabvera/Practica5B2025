/* ********** CAlumno.h ************** */
/* *************************************
PROGRAMACION ORIENTADA A OBJETOS CON C++
        prof. Armando B. VERA
************************************** */

#ifndef CALUMNO_H
#define CALUMNO_H
#include "../CPERSONA/CPersona.h"

class CAlumno : public CPersona {
	private:
		int matricula;
		CPersona tutor;
	public:
		CAlumno();
		CAlumno(std::string nom_in, std::string ape_in, std::string dni_in,
			std::string gen_in, int fdn_in, int mat_in, CPersona tutor);
		~CAlumno();
		void setMatricula(int mat_in);
		void setTutor(CPersona tut_in);
		int getMatricula() const;
		CPersona getTutor() const;
		std::string toString();
};

#endif // CALUMNO_H

