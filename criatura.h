#ifndef CRIATURA_H
#define CRIATURA_H

#include <iostream>
#include <string>

using namespace std;

class Criatura {
 protected:
   int salud;
   int dmg;
 public:
   string nombre;

   Criatura(string _nommbre, int _dmg);
   void receiveDamage(int receivedDmg = 1);
   int getDmg();
   void saludar();
   void setDmg(int _dmg);
};

#endif // CRIATURA_H
