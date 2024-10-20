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
#include <fstream>
#include <string>

#include "alfabeto.h"
#include "Automata.h"
#include "cadena.h"

void lectura_dfa(std::string, Automata& automata, Alfabeto& alfabeto);

void lectura_cadenas(std::string, Automata& automata, Alfabeto& Alfabeto);


