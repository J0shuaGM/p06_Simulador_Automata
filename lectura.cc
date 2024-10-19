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

#include "lectura.h"



void lectura_dfa(std::string fichero_entrada, Automata& automata) {

  std::ifstream input(fichero_entrada); 

  if (!input.is_open()) {
    std::cerr << "El fichero de lectura del dfa no se ha podido abrir" << std::endl;
    exit(EXIT_FAILURE);
  }

  std::string datos;
  Alfabeto alfabeto;
  Estado estado;
  int contador{1};
  int numero_estados{0};

  while (std::getline(input, datos)) {
    if(contador == 1) {
      alfabeto = Alfabeto(datos);
      ++contador;
    } else if (contador == 2) {  
      numero_estados = std::stoi(datos);
      ++contador;
    } else if (contador == 3) {
      int estado_inicial = std::stoi(datos);
      automata.setEstadoInicial(estado_inicial);
      ++contador;
    } else estado = Estado(datos);
    automata.insertEstado(estado);
    if (datos[2] == '1') automata.insertAceptacion(estado);
  }
}



void lectura_cadenas(std::string fichero_entrda) {

  std::ifstream input(fichero_entrda);

  if (!input.is_open()) {
    std::cerr << "El fichero de lectura de cadenas no se ha podido abrir" << std::endl;
    exit(EXIT_FAILURE);
  }

  std::string linea;
  Cadena cadena; 


  while(std::getline(input, linea)) {
    cadena = Cadena(linea);
    std::cout << cadena << std::endl;
  }
}