#include "criatura.h"

Criatura::Criatura(string _nommbre, int _dmg) {
    nombre = _nommbre;
    dmg = _dmg;
    salud = 10;
    std::cout << "ha nacido un/a " << nombre << std::endl;
}

void Criatura::receiveDamage(int receivedDmg) {
    salud -= receivedDmg;
    std::cout << "A " << nombre << " le quedan " << salud << " de salud" << std::endl;
    if (salud <= 0) {
        std::cout << nombre << " ha muerto" << std::endl;
        exit(0);
    }
}

int Criatura::getDmg() {
    return dmg;
}

void Criatura::saludar() {
    std::cout << "el/la " << nombre << " diche: Hola!" << std::endl;
}

void Criatura::setDmg(int _dmg) {
    dmg = _dmg;
}
