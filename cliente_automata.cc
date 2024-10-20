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

#include "tools.h"
#include "lectura.h"
#include "alfabeto.h"
#include "Automata.h"



/**
* @brief Función del cliente principal
* @param argc Parametro con el numero de argumentos que hay en la línea de ejecucion
* @param argv Array con los argumentos pasados por la linea de ejecucion
*/
int main(int argc, char* argv[]) {
	Usage(argc, argv);
  Automata automata;
  Alfabeto alfabeto;
  std::string fichero_dfa{argv[1]}; 
  std::string fichero_cadenas{argv[2]};
  lectura_dfa(fichero_dfa, automata, alfabeto);
  lectura_cadenas(fichero_cadenas, automata, alfabeto);
  return 0;
}