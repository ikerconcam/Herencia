#pragma once
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
#include <iostream>

using namespace std;

class Personaje {
public:
    Personaje(string nombre, int vida, int ataque, int ataqueMagico, int posicionX, int posicionY)
        : nombre(nombre), vida(vida), ataque(ataque), ataqueMagico(ataqueMagico), posicionX(posicionX), posicionY(posicionY) {}

    // Getters
    string getNombre() { return nombre; }
    int getVida() { return vida; }
    int getAtaque() { return ataque; }
    int getAtaqueMagico() { return ataqueMagico; }
    int getPosicionX() { return posicionX; }
    int getPosicionY() { return posicionY; }

    // Setters
    void setNombre(string nombre) { this->nombre = nombre; }
    void setVida(int vida) { this->vida = vida; }
    void setAtaque(int ataque) { this->ataque = ataque; }
    void setAtaqueMagico(int ataqueMagico) { this->ataqueMagico = ataqueMagico; }
    void setPosicionX(int posicionX) { this->posicionX = posicionX; }
    void setPosicionY(int posicionY) { this->posicionY = posicionY; }

private:
    string nombre;
    int vida;
    int ataque;
    int ataqueMagico;
    int posicionX;
    int posicionY;
};

#endif // PERSONAJE_H
