#ifndef SWORD_H
#define SWORD_H

#include "Item.h"
#include "Weapon.h"

class Sword : public Weapon {
  
  public:
    Sword() {
      setName("Sword");
      setRange(1);
      setAttack(50);
    }
};

#endif // SWORD_H