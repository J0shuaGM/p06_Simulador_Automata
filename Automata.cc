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
#include <map>

#include "Automata.h"
#include "cadena.h"
#include "Estado.h"



void Automata::setEstadoInicial(int estado_inicial) {
  estado_inicial_ = estado_inicial;
}





void Automata::setSize(int numero_estados) {
  estados_.resize(numero_estados);
}




void Automata::simulacion(Cadena cadena) {
  for(const Estado& estado : estados_) {
    for(const auto& transicion : estado.getTransiciones()) {
      char simbolo_entrada = transicion.first;
      char simbolo_salida = transicion.second;

      std::cout << simbolo_entrada << " " << simbolo_salida << std::endl;  
    }
  }
}
