#ifndef SAMUEL_H
#define SAMUEL_H

#include "Character.h"

class Samuel : public Character {
  private:

  public:
    Samuel() {
      setMaxHealth(200);
      fullHeal();
      setName("Samuel");
      setDamage(20);
    };
};

#endif // SAMUEL_H