#include "heroe.h"

Heroe::Heroe() : Personaje("heroe") {}

void Heroe::receiveDamage(int receivedDmg) {
    Criatura::receiveDamage(receivedDmg);
    salud += 2;
}
