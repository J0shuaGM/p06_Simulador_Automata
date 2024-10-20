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

#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <iostream>
#include <vector> // in my opinion

#include "Estado.h"
#include "cadena.h"

class Automata {
  public: 
	  // Constructores
    Automata(void) {} // Por defecto

		// Destructor
	  ~Automata() {}

		// Getters
    std::vector<Estado> getEstados(void) const { return estados_; }
    std::vector<Estado> getAceptacion(void) const { return aceptacion_; } 
    char getEstadoActual() { return estado_actual_.getNombre(); }
    

    // Setters
    void setEstadoActual(const Estado& estado_actual);
    void setSize(int);
    
    // Metodos
    void insertAceptacion(const Estado estado) { aceptacion_.push_back(estado); }
		void insertEstado(const Estado estado) { estados_.push_back(estado); }
    bool simulacion(Cadena);
  
  private: 
		Estado estado_actual_; // Atributo de la clase que contiene el identificador del estado actual
												// en el que se encuentra el automata
    std::vector<int> estados_actuales_; // Atributo de la clase que contiene un vector con los estados 
                                        // 
    std::vector<Estado> aceptacion_; // Atributo de la clase que contiene un vector con los estados
																		 // de aceptacion del automata
    std::vector<Estado> estados_; // Atributo de la clase que contiene un vector con todos los
																	// estados del automata
};

#endif