#include "Funciones.h"

bool estaEnLaSalida(Personaje& heroe) {
    // Implementa esta funci�n para comprobar si el h�roe est� en la salida.
    // Por ejemplo, podr�as comprobar si la posici�n Y del h�roe es igual a la altura del tablero.
    const int ALTURA_DEL_TABLERO = 10;  // Asumiendo un tama�o de tablero de 10
    return heroe.getPosicionY() == ALTURA_DEL_TABLERO - 1;
}

bool hayUnEnemigo(Personaje& heroe, Personaje& enemigo) {
    // Implementa esta funci�n para comprobar si hay un enemigo en la posici�n del h�roe.
    // Por ejemplo, podr�as comprobar si las posiciones X e Y del h�roe y del enemigo son iguales.
    return heroe.getPosicionX() == enemigo.getPosicionX() && heroe.getPosicionY() == enemigo.getPosicionY();
}
