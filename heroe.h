#ifndef HEROE_H
#define HEROE_H

#include "personaje.h"

class Heroe : public Personaje {
 public:
    Heroe();
    void receiveDamage(int receivedDmg = 1);
};

#endif // HEROE_H
