#include "Funciones.h"

bool estaEnLaSalida(Personaje& heroe) {
    // Implementa esta función para comprobar si el héroe está en la salida.
    // Por ejemplo, podrías comprobar si la posición Y del héroe es igual a la altura del tablero.
    const int ALTURA_DEL_TABLERO = 10;  // Asumiendo un tamaño de tablero de 10
    return heroe.getPosicionY() == ALTURA_DEL_TABLERO - 1;
}

bool hayUnEnemigo(Personaje& heroe, Personaje& enemigo) {
    // Implementa esta función para comprobar si hay un enemigo en la posición del héroe.
    // Por ejemplo, podrías comprobar si las posiciones X e Y del héroe y del enemigo son iguales.
    return heroe.getPosicionX() == enemigo.getPosicionX() && heroe.getPosicionY() == enemigo.getPosicionY();
}
