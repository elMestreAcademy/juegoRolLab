#include "personaje.h"

Personaje::Personaje() : Criatura("personaje", 2) {
    std::cout << "Se ha creado un personaje" << endl;
}

Personaje::Personaje(string _nombre) : Criatura(_nombre, 2) {
    std::cout << "Se ha creado un " << nombre << endl;
}
