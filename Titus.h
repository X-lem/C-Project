#ifndef TITUS_H
#define TITUS_H

#include "Character.h"

class Titus : public Character {
  private:

  public:
    Titus() {
      setMaxHealth(275);
      fullHeal();
      setDamage(25);
      setName("Titus");
    };
};

#endif // Titus_H