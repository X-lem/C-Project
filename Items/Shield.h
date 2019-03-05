#ifndef SHIELD_H
#define SHIELD_H

#include "Armor.h"
#include "Item.h"

class Shield : public Armor {

  public:
    Shield() {
      setName("Shield");
      setProtection(5);
    }
};

#endif // SHIELD_H