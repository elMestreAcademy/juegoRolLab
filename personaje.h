#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "criatura.h"

class Personaje : public Criatura {
 public:
    Personaje();
    Personaje(string _nombre);
};

#endif // PERSONAJE_H
