#include "Personaje.h"
#include "EnemigoFinal.h"
#include "Funciones.h"
#include <iostream>

using namespace std;

const int ANCHO_TABLERO = 10;
const int ALTO_TABLERO = 10;

void moverHeroe(Personaje& heroe, char direccion) {
    int nuevaPosX = heroe.getPosicionX();
    int nuevaPosY = heroe.getPosicionY();
    bool enBorde = false;

    switch (direccion) {
    case 'N': case 'n':
        if (nuevaPosY == 0) {
            cout << "Estás en el borde superior.\n";
            enBorde = true;
        }
        else {
            nuevaPosY--;
        }
        break;
    case 'S': case 's':
        if (nuevaPosY == ALTO_TABLERO - 1) {
            cout << "Estás en el borde inferior.\n";
            enBorde = true;
        }
        else {
            nuevaPosY++;
        }
        break;
    case 'E': case 'e':
        if (nuevaPosX == ANCHO_TABLERO - 1) {
            cout << "Estás en el borde derecho.\n";
            enBorde = true;
        }
        else {
            nuevaPosX++;
        }
        break;
    case 'O': case 'o':
        if (nuevaPosX == 0) {
            cout << "Estás en el borde izquierdo.\n";
            enBorde = true;
        }
        else {
            nuevaPosX--;
        }
        break;
    default:
        cout << "Dirección no válida.\n";
        return;
    }

    if (!enBorde) {
        heroe.setPosicionX(nuevaPosX);
        heroe.setPosicionY(nuevaPosY);
    }
}

int main() {
    // Crear el héroe y los enemigos aquí...
    Personaje enemigoComun("Enemigo Común", 100, 10, 0, 2, 3);
    Personaje heroe("Héroe", 200, 20, 30, 0, 0);
    EnemigoFinal enemigoFinal("Enemigo Final", 300, 40, 25, 5, 9);

    // Inicializar el tablero del juego...

    while (true) {
        cout << "¿Hacia qué dirección quieres moverte? (N/S/E/O): ";
        char direccion;
        cin >> direccion;

        // Mover al héroe en la dirección elegida...
        moverHeroe(heroe, direccion);

        // Comprobar si hay un enemigo en la nueva posición...
        if (hayUnEnemigo(heroe, enemigoComun)) {
            cout << "¡Has encontrado un enemigo! Comienza la batalla...\n";

            // Luchar contra el enemigo...
            if (heroe.getVida() > 0 && enemigoComun.getVida() <= 0) {
                cout << "Has derrotado al enemigo. Puedes seguir adelante.\n";
            }
            else {
                cout << "El enemigo te ha derrotado. Fin del juego.\n";
                break;
            }
        }

        // Comprobar si el héroe ha llegado a la salida...
        if (estaEnLaSalida(heroe)) {
            cout << "Has encontrado la salida. Pero antes, debes enfrentarte al enemigo final...\n";

            // Luchar contra el enemigo final...
            if (heroe.getVida() > 0 && enemigoFinal.getVida() <= 0) {
                cout << "Has derrotado al enemigo final y has escapado. ¡Felicidades!\n";
            }
            else {
                cout << "El enemigo final te ha derrotado. Fin del juego.\n";
            }
            break;
        }
    }

    return 0;
}
