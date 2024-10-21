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


/**
* @brief Metodo que establece el estado actual de automata
* @param estado_actual parametro de tipo estado que contiene el estado actual de automata.
*/
void Automata::setEstadoActual(const Estado& estado_actual) {
  estado_actual_ = estado_actual;
}




/**
* @brief Metodo que establece el tamaño del vector de estados del automata
* @param numero_estados entero que contiene el numero de estados del automata
*/
void Automata::setSize(int numero_estados) {
  estados_.resize(numero_estados);
}



/**
* @brief Metodo que simula el comportamiento del automata 
* @param cadena objeto de tipo Cadena que contiene las cadenas a analizar por el automata
*/
bool Automata::simulacion(Cadena cadena) {
  char caracteres;
  bool encontrado;
  Estado estado_inicial = estado_actual_; 
  for(int i{0}; i < cadena.longitud(); ++i) {
    caracteres = cadena.getCadena()[i];
    //for(const Estado& estado : estados_actuales) {
      for(const auto& transicion : estado_actual_.getTransiciones()) { 
        encontrado = false;       
        if(caracteres == transicion.first) {
          for(const auto& estado : estados_) {
            if(transicion.second == estado.getNombre()) {
              estado_actual_ = estado;  
              encontrado = true;
              break;
            }
          }
        }
        if(encontrado) break;
      }
    //}
  }
  bool aceptacion{false};
  for(const auto& i : aceptacion_) {
    if(i.getNombre() == estado_actual_.getNombre()) {
      aceptacion = true;  
      break;
    }
  }
  estado_actual_ = estado_inicial;
  return aceptacion;
}