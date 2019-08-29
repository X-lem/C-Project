#ifndef ARMOR_H
#define ARMOR_H

#include <iostream>
#include <string>

#include "Item.h"

class Armor : public Item {
  private:
    double _Defense;
    double _durability;
    bool isDestroyable = false;

  protected:
    void setProtection(double prot) {
      _Defense = prot;
    }
    void setDurability(double dur) {
      _durability = dur;
    }

  public:
    Armor(){};
    double getDefense() {
      return _Defense;
    }
    double getDurability() {
      return _durability;
    }
};

#endif // ARMOR_H