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


#include "Estado.h"

/**
* @brief Constructor parametrizado de la clase Estado
* @param datos Cadena con los datos con los que se construirá el estado.
*/
Estado::Estado(std::string datos) {
  nombre_ = datos[0]; 
  for (int i{4}; i < datos.length(); i += 2) {
    if (i > 4 && i % 2 == 0) { 
      transiciones_.insert(std::make_pair(datos[i], datos[i + 2])); 
      i += 2;
    }
  }
}



Estado::Estado(const Estado& estado_copia) {
  transiciones_.clear();
  for (const auto& i : estado_copia.getTransiciones()) {
    transiciones_.insert(i);
  }
  nombre_ = estado_copia.getNombre();
}