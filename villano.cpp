#include "villano.h"

int Villano::getDmg() {
    setDmg(Personaje::getDmg() + 1);
    int myDmg = Personaje::getDmg();
    return myDmg;
}
