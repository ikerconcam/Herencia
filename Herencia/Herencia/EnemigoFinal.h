#pragma once
#ifndef ENEMIGOFINAL_H
#define ENEMIGOFINAL_H

#include "Personaje.h"

class EnemigoFinal : public Personaje {
public:
    EnemigoFinal(string nombre, int vida, int ataqueFisico, int ataqueMagico, int posicionX, int posicionY)
        : Personaje(nombre, vida, ataqueFisico, ataqueMagico, posicionX, posicionY) {}
};

#endif // ENEMIGOFINAL_H
