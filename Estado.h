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

#ifndef ESTADO_H
#define ESTADO_H

#include <iostream>

#include <map>

class Estado {
  public:
    //Constructores
    Estado(void) {}; // Por defecto
    Estado(std::string datos); // Parametrizado
    Estado(const Estado&); // Constructor de copia

    // Destructor
    ~Estado() {};

    // Getters
    char getNombre() { return nombre_; }
    std::multimap<char, char> getTransiciones(void) { return transiciones_; }
    char getNombre() const { return nombre_; }
    std::multimap<char, char> getTransiciones(void) const { return transiciones_; }    

  private: 
    char nombre_;
    std::multimap<char, char> transiciones_; // clave->valor(simbolo->numero estado siguiente)
};


#endif