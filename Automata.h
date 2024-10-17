// Universidad de La Laguna
// Escuela Superior de Ingenierıa y Tecnologıa
// Grado en Ingenierıa Informatica
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Practica 4: Expreciones regulares
// Autor: Joshua Gomez Marrero
// Correo: alu0101477398@ull.edu.es
// Fecha: 17/09/2024
// Archivo tools.cc: delcaracion de funciones
// Contiene la implementacion de las fundciones que no pertenecen a metodos
// para ... (indicar brevemente el objetivo)
// Referencias:
// Enlaces de interes
// Historial de revisiones
// 17/09/2024 - Creacion (primera version) del codigo

#include <iostream>
#include <vector> // in my opinion

#include "Estado.h"

class Automata {
  public: 
	  // Constructores
    Automata(void) {} // Por defecto

		// Destructor
	  ~Automata() {}

		// Getters
    int getEstadoActual(void);
    int getEstadoInicial(void); 

    // Setters
    void setEstadoInicial(int estado_inicial);

  
  private: 
		int estado_actual_; // Atributo de la clase que contiene el identificador del estado actual
												// en el que se encuentra el automata
		int estado_inicial_;
    std::vector<Estado> aceptacion_; // Atributo de la clase que contiene un vector con los estados
																		 // de aceptacion del automata
    std::vector<Estado> estados_; // Atributo de la clase que contiene un vector con todos los
																	// estados del automata
}