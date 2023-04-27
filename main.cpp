#include <iostream>
#include <string>
#include "criatura.h"
#include "personaje.h"
#include "heroe.h"
#include "villano.h"

using namespace std;

int main(int argc, char const *argv[]) {
    if (argc > 1)
        std::cout << "Hello " << argv[1] << std::endl;
    else
        std::cout << "Hello.... Player?" << std::endl;

    // Criatura criatura1("vampiro", 3);
    Villano criatura1;
    Heroe personaje;

    std::cout << std::endl
         << std::endl;

    // Personaje personaje("Personaje");
    personaje.saludar();
    criatura1.saludar();

    std::cout << std::endl
         << std::endl;

    while (true) {
        criatura1.receiveDamage(personaje.getDmg());
        personaje.receiveDamage(criatura1.getDmg());
    }
    return 0;
}
